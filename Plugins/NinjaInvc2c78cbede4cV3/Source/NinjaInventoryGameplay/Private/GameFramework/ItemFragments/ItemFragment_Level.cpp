// Ninja Bear Studio Inc., all rights reserved.
#include "GameFramework/ItemFragments/ItemFragment_Level.h"

#include "AbilitySystemComponent.h"
#include "NinjaEquipmentTags.h"
#include "NinjaInventoryGameplayFunctionLibrary.h"
#include "NinjaInventoryGameplayTags.h"
#include "NinjaInventoryLog.h"
#include "AbilitySystem/Effects/InventoryEffect_Level.h"
#include "GameFramework/NinjaInventoryItem.h"
#include "GameFramework/ItemFragments/ItemFragment_Container.h"
#include "GameFramework/ItemFragments/ItemFragment_Equipment.h"
#include "Types/FItemFragmentMemories.h"
#include "Types/FItemFragmentOperationPayload.h"

UItemFragment_Level::UItemFragment_Level()
{
	bCanUpgrade = false;
	Level = 1;
	MaximumLevel = 999;
	EffectLevel = Level;
	EffectClass = UInventoryEffect_Level::StaticClass();
	OperationTags.AddTag(Tag_Inventory_Item_Operation_Upgrade);
	SynchronizeUpgradeableTrait();
}

int32 UItemFragment_Level::GetLevel(const UNinjaInventoryItem* Item) const
{
	if (!CanUpgrade() || !IsValid(Item))
	{
		return Level;
	}

	FInventoryItemFragmentLevelMemory LevelMemory;
	if (!GetMemory<FInventoryItemFragmentLevelMemory>(Item, LevelMemory))
	{
		return Level;
	}
	
	return LevelMemory.CurrentLevel;
}

void UItemFragment_Level::SetLevel(UNinjaInventoryItem* Item, const int32 NewLevel)
{
	if (!CanUpgrade() || !IsValid(Item) || !ItemHasAuthority(Item))
	{
		return;
	}

	SaveMemoryWithPredicate<FInventoryItemFragmentLevelMemory>(Item, [this, Item, NewLevel](FInventoryItemFragmentLevelMemory* FragmentMemory, bool bIsNew)
	{
		const int32 ClampedNewLevel = ClampLevel(NewLevel);
		if (FragmentMemory->CurrentLevel == ClampedNewLevel)
		{
			return false;
		}
		
		FragmentMemory->CurrentLevel = ClampLevel(ClampedNewLevel);
		ReApplyLevelEffect(Item, NewLevel);
		return true;
	});
}

void UItemFragment_Level::Upgrade(UNinjaInventoryItem* Item, const int32 Increment)
{
	if (!CanUpgrade() || !IsValid(Item) || !ItemHasAuthority(Item) || Increment <= 0)
	{
		return;
	}

	SaveMemoryWithPredicate<FInventoryItemFragmentLevelMemory>(Item, [this, Item, Increment](FInventoryItemFragmentLevelMemory* FragmentMemory, bool bIsNew)
	{
		const int32 NewLevel = ClampLevel(FragmentMemory->CurrentLevel + Increment); 
		if (FragmentMemory->CurrentLevel == NewLevel)
		{
			return false;
		}
		
		FragmentMemory->CurrentLevel = NewLevel;
		ReApplyLevelEffect(Item, NewLevel);
		return true;
	});
}

void UItemFragment_Level::ReApplyLevelEffect(UNinjaInventoryItem* Item, const float NewLevel)
{
	if (HasAppliedEffect(Item))
	{
		// The effect was applied, acknowledge the removal and apply again. 
		if (RemoveEffect(Item))
		{
			ApplyEffect(Item, NewLevel);
		}
	}
	else
	{
		// The effect was not applied before.
		ApplyEffect(Item, NewLevel);
	}
}

void UItemFragment_Level::OnInitializeFragment_Implementation(UNinjaInventoryItem* Item)
{
	// No need to initialize the memory, if the item is not upgradeable.
	if (!CanUpgrade())
	{
		return;
	}
	
	FInventoryItemFragmentLevelMemory LevelMemory;
	LevelMemory.CurrentLevel = Level;
	SaveMemory<FInventoryItemFragmentLevelMemory>(Item, LevelMemory);
}

void UItemFragment_Level::OnApplyFragment_Implementation(UNinjaInventoryItem* Item)
{
	const UItemFragment_Equipment* EquipmentFragment = Item->FindFragment<UItemFragment_Equipment>();
	if (!IsValid(EquipmentFragment))
	{
		// If this item is not an Equipment, we don't need to track the container, as the Gear Level
		// effect would never be applied. Gear Level is only relevant for equipped items!
		//
		return;
	}

	// Track the item being removed from the inventor as the removal skips container change.
	Item->OnItemRemoved.AddUniqueDynamic(this, &ThisClass::SynchronizedFromItemRemoved);

	UItemFragment_Container* ContainerFragment = Item->FindFragment<UItemFragment_Container>();
	if (IsValid(ContainerFragment))
	{
		// Track the container, the Effect is only relevant in Equipment Slots.
		ContainerFragment->OnContainerChanged.AddUniqueDynamic(this, &ThisClass::SynchronizeFromContainer);
	}
	
	UNinjaInventoryContainer* Container = ContainerFragment->GetPrimaryContainer(Item);
	if (UNinjaInventoryGameplayFunctionLibrary::IsEquipmentContainer(Container))
	{
		// Ensure that we are in sync with the current item state.
		SynchronizeFromContainer(Item, Container);
	}
}

void UItemFragment_Level::SynchronizedFromItemRemoved(UNinjaInventoryItem* Item)
{
	if (!IsValid(Item) || !Item->HasInitializedFragments())
	{
		return;
	}

	if (HasAppliedEffect(Item))
	{
		RemoveEffect(Item);
	}	
}

void UItemFragment_Level::SynchronizeFromContainer(UNinjaInventoryItem* Item, UNinjaInventoryContainer* Container)
{
	if (!IsValid(Item) || !Item->HasInitializedFragments())
	{
		return;
	}
	
	const bool bIsEquipmentContainer = UNinjaInventoryGameplayFunctionLibrary::IsEquipmentContainer(Container);
	const bool bHasAppliedEffect = HasAppliedEffect(Item);  

	if (bIsEquipmentContainer && !bHasAppliedEffect)
	{
		const float CurrentLevel = GetLevel(Item);
		ApplyEffect(Item, CurrentLevel);
	}
	else if (!bIsEquipmentContainer && bHasAppliedEffect)
	{
		RemoveEffect(Item);
	}
}

void UItemFragment_Level::HandleMemoryCreated_Implementation(UNinjaInventoryItem* Item, TInstancedStruct<FInventoryFragmentMemory>& FragmentMemory)
{
	BroadcastChanges(Item, FragmentMemory);
}

void UItemFragment_Level::HandleMemoryUpdated_Implementation(UNinjaInventoryItem* Item, TInstancedStruct<FInventoryFragmentMemory>& FragmentMemory)
{
	BroadcastChanges(Item, FragmentMemory);
}

UScriptStruct* UItemFragment_Level::GetPayloadStruct() const
{
	return FInventoryFragmentLevelOperationPayload::StaticStruct();
}

bool UItemFragment_Level::OnEvaluateOperation_Implementation(const TInstancedStruct<FInventoryFragmentPayload>& Payload) const
{
	if (!CanUpgrade())
	{
		return false;
	}
	
	const FInventoryFragmentLevelOperationPayload* LevelPayload = Payload.GetPtr<FInventoryFragmentLevelOperationPayload>();
	if (LevelPayload == nullptr)
	{
		return false;
	}
	
	const UNinjaInventoryItem* Item = LevelPayload->Item;
	if (!IsValid(Item))
	{
		return false;
	}

	const int32 CurrentLevel = GetLevel(Item);
	if (LevelPayload->IsUpgradeOperation())
	{
		const bool bIsIncremental = LevelPayload->bIsIncremental; 
		const int32 NewLevel = bIsIncremental ? CurrentLevel + LevelPayload->Value : LevelPayload->Value;
		
		if (NewLevel > 0 && NewLevel <= MaximumLevel)
		{
			return true;
		}
	}

	return false;
}

void UItemFragment_Level::OnPerformOperation_Implementation(const TInstancedStruct<FInventoryFragmentPayload>& Payload)
{
	const FInventoryFragmentLevelOperationPayload* LevelPayload = Payload.GetPtr<FInventoryFragmentLevelOperationPayload>();
	if (LevelPayload == nullptr)
	{
		INVENTORY_LOG(Error, "Invalid payload type to perform upgrade operation!");
		return;
	}
	UNinjaInventoryItem* Item = LevelPayload->Item;
	const int32 Value = LevelPayload->Value;
	
	if (LevelPayload->bIsIncremental)
	{
		Upgrade(Item, Value);
	}
	else
	{
		SetLevel(Item, Value);
	}
}

void UItemFragment_Level::BroadcastChanges(UNinjaInventoryItem* Item, TInstancedStruct<FInventoryFragmentMemory>& FragmentMemory)
{
	if (!IsValid(Item) || !FragmentMemory.IsValid())
	{
		return;
	}
	
	FInventoryItemFragmentLevelMemory* LevelMemory = FragmentMemory.GetMutablePtr<FInventoryItemFragmentLevelMemory>();
	if (LevelMemory == nullptr)
	{
		INVENTORY_LOG_ARGS(Error, "Level memory for item '%s' should not be null!", *GetNameSafe(Item));
		return;		
	}
	
	bool bHasChanges = false;
	const int32 NewLevel = LevelMemory->CurrentLevel;
	
	if (NewLevel != LevelMemory->LastLevel)
	{
		LevelMemory->LastLevel = NewLevel;
		OnLevelChanged.Broadcast(Item, NewLevel);
		bHasChanges = true;
	}

	if (bHasChanges)
	{
		SaveMemory<FInventoryItemFragmentLevelMemory>(Item, *LevelMemory);
	}
}

bool UItemFragment_Level::CanApplyEffect(const UNinjaInventoryItem* Item) const
{
	// On top of the default test, make sure the item is in an Equipment Container.
	return Super::CanApplyEffect(Item) && UNinjaInventoryGameplayFunctionLibrary::InEquipmentContainer(Item);
}

bool UItemFragment_Level::ApplyEffect(UNinjaInventoryItem* Item, const float EffectLevelOverride)
{
	const UItemFragment_Container* ContainerFragment = IsValid(Item) ? Item->FindFragment<UItemFragment_Container>() : nullptr;
	if (!IsValid(ContainerFragment))
	{
		return false;
	}
	
	const UNinjaInventoryContainer* Container = ContainerFragment->GetPrimaryContainer(Item);
	if (!(IsValid(Container) && UNinjaInventoryGameplayFunctionLibrary::IsEquipmentContainer(Container)))
	{
		return false;
	}

	return Super::ApplyEffect(Item, EffectLevelOverride);
}

bool UItemFragment_Level::DetermineEffectLevel_Implementation(const UNinjaInventoryItem* Item, float& OutEffectLevel) const
{
	OutEffectLevel = GetLevel(Item);
	return true;
}

void UItemFragment_Level::GetMagnitudes_Implementation(const UNinjaInventoryItem* Item, TMap<FGameplayTag, float>& OutMagnitudes) const
{
	const int32 CurrentGearLevel = GetLevel(Item);
	OutMagnitudes.Add(Tag_Inventory_Item_Data_Level, CurrentGearLevel);
}

int32 UItemFragment_Level::ClampLevel(const int32 Value) const
{
	static constexpr int32 MinLevel = 0;
	return FMath::Clamp(Value, MinLevel, MaximumLevel);
}

void UItemFragment_Level::SynchronizeUpgradeableTrait()
{
	const FGameplayTag& Tag = Tag_Inventory_Item_Trait_Upgradeable;
	if (bCanUpgrade)
	{
		ItemTags.AddTagFast(Tag);
	}
	else
	{
		ItemTags.RemoveTag(Tag);
	}	
}

#if WITH_EDITOR
bool UItemFragment_Level::CanEditChange(const FProperty* InProperty) const
{
	if (InProperty->GetFName() == GET_MEMBER_NAME_CHECKED(UItemFragment_Level, EffectLevel))
	{
		// We want to disable the original effect level, since we will use the item level.
		return false;
	}

	return Super::CanEditChange(InProperty);
}

void UItemFragment_Level::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);

	const FName PropertyName = PropertyChangedEvent.GetPropertyName();
	if (PropertyName == GET_MEMBER_NAME_CHECKED(UItemFragment_Level, Level))
	{
		EffectLevel = Level;
	}

	if (PropertyName == GET_MEMBER_NAME_CHECKED(UItemFragment_Level, bCanUpgrade))
	{
		SynchronizeUpgradeableTrait();
	}
}
#endif