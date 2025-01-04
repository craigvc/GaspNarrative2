// Ninja Bear Studio Inc., all rights reserved.
#include "NinjaInventoryGameplayFunctionLibrary.h"

#include "NinjaInventoryGameplayTags.h"
#include "NinjaInventoryTags.h"
#include "Data/NinjaInventoryContainerDataAsset.h"
#include "GameFramework/FInventoryFragmentMemoryUtils.h"
#include "GameFramework/FInventoryFragmentPayloadUtils.h"
#include "GameFramework/NinjaInventoryItem.h"
#include "GameFramework/ItemFragments/ItemFragment_Container.h"
#include "GameFramework/ItemFragments/ItemFragment_Durability.h"
#include "GameFramework/ItemFragments/ItemFragment_Level.h"
#include "GameFramework/ItemFragments/ItemFragment_Stack.h"
#include "Types/FItemFragmentMemories.h"
#include "Types/FItemFragmentOperationPayload.h"

bool UNinjaInventoryGameplayFunctionLibrary::InEquipmentContainer(const UNinjaInventoryItem* Item)
{
	if (IsValid(Item))
	{
		return false;
	}

	const UItemFragment_Container* ContainerFragment = Item->FindFragment<UItemFragment_Container>();
	if (!IsValid(ContainerFragment))
	{
		return false;
	}
	
	const UNinjaInventoryContainer* Container = ContainerFragment->GetPrimaryContainer(Item);
	return IsEquipmentContainer(Container);
}

bool UNinjaInventoryGameplayFunctionLibrary::IsEquipmentContainer(const UNinjaInventoryContainer* Container)
{
	if (!IsValid(Container))
	{
		return false;
	}
	
	FGameplayTagContainer ContainerTags;
	Container->GetOwnedGameplayTags(ContainerTags);
	return ContainerTags.HasTagExact(Tag_Inventory_Container_Equipment);
}

FInventoryDefaultItemMemory UNinjaInventoryGameplayFunctionLibrary::CreateContainerMemory(
	const UNinjaInventoryContainerDataAsset* PrimaryContainer, const int32 Position)
{
	FInventoryItemFragmentContainerMemory ContainerMemory;
	ContainerMemory.DefaultContainerData = PrimaryContainer;
	ContainerMemory.Position = Position;
	return FInventoryFragmentMemoryUtils::MakeDefaultMemory(UItemFragment_Container::StaticClass(), ContainerMemory);
}

FInventoryDefaultItemMemory UNinjaInventoryGameplayFunctionLibrary::CreateStackMemory(const int32 StackSize)
{
	FInventoryItemFragmentStackMemory StackMemory;
	StackMemory.StackSize = StackSize;
	return FInventoryFragmentMemoryUtils::MakeDefaultMemory(UItemFragment_Stack::StaticClass(), StackMemory);
}

FInventoryDefaultItemMemory UNinjaInventoryGameplayFunctionLibrary::CreateDurabilityMemory(const float Durability)
{
	FInventoryItemFragmentDurabilityMemory DurabilityMemory;
	DurabilityMemory.CurrentDurability = Durability;
	return FInventoryFragmentMemoryUtils::MakeDefaultMemory(UItemFragment_Durability::StaticClass(), DurabilityMemory);
}

FInventoryDefaultItemMemory UNinjaInventoryGameplayFunctionLibrary::CreateLevelMemory(const float Level)
{
	FInventoryItemFragmentLevelMemory LevelMemory;
	LevelMemory.CurrentLevel = Level;
	return FInventoryFragmentMemoryUtils::MakeDefaultMemory(UItemFragment_Level::StaticClass(), LevelMemory);
}

TInstancedStruct<FInventoryFragmentPayload> UNinjaInventoryGameplayFunctionLibrary::CreateConsumePayload(
	UNinjaInventoryItem* Item)
{
	FInventoryFragmentConsumeOperationPayload ConsumePayload;
	ConsumePayload.OperationTag = Tag_Inventory_Item_Operation_Consume;
	ConsumePayload.Item = Item;
	return FInventoryFragmentPayloadUtils::MakeFragmentPayload(ConsumePayload);
}

TInstancedStruct<FInventoryFragmentPayload> UNinjaInventoryGameplayFunctionLibrary::CreateMovePayload(
	UNinjaInventoryItem* Item, UNinjaInventoryContainer* Container, const int32 Position)
{
	FInventoryFragmentStorageOperationPayload MovePayload;
	MovePayload.OperationTag = Tag_Inventory_Item_Operation_Move;
	MovePayload.Item = Item;
	MovePayload.Container = Container;
	MovePayload.Position = Position;
	return FInventoryFragmentPayloadUtils::MakeFragmentPayload(MovePayload);
}

TInstancedStruct<FInventoryFragmentPayload> UNinjaInventoryGameplayFunctionLibrary::CreateSwapPayload(
	UNinjaInventoryItem* Item, UNinjaInventoryItem* ItemToSwap)
{
	FInventoryFragmentStorageOperationPayload SwapPayload;
	SwapPayload.OperationTag = Tag_Inventory_Item_Operation_Swap;
	SwapPayload.Item = Item;
	SwapPayload.ItemToSwap = ItemToSwap;
	return FInventoryFragmentPayloadUtils::MakeFragmentPayload(SwapPayload);
}

TInstancedStruct<FInventoryFragmentPayload> UNinjaInventoryGameplayFunctionLibrary::CreateActivatePayload(
	UNinjaInventoryItem* Item)
{
	FInventoryFragmentEquipmentOperationPayload ActivatePayload;
	ActivatePayload.OperationTag = Tag_Inventory_Item_Operation_Activate;
	ActivatePayload.Item = Item;
	return FInventoryFragmentPayloadUtils::MakeFragmentPayload(ActivatePayload);
}

TInstancedStruct<FInventoryFragmentPayload> UNinjaInventoryGameplayFunctionLibrary::CreateCombinePayload(
	UNinjaInventoryItem* Item, UNinjaInventoryItem* ItemToCombine)
{
	FInventoryFragmentStackOperationPayload CombinePayload;
	CombinePayload.OperationTag = Tag_Inventory_Item_Operation_Combine;
	CombinePayload.Item = Item;
	CombinePayload.ItemToCombine = ItemToCombine;
	return FInventoryFragmentPayloadUtils::MakeFragmentPayload(CombinePayload);
}

TInstancedStruct<FInventoryFragmentPayload> UNinjaInventoryGameplayFunctionLibrary::CreateDeactivatePayload(
	UNinjaInventoryItem* Item)
{
	FInventoryFragmentEquipmentOperationPayload DeactivatePayload;
	DeactivatePayload.OperationTag = Tag_Inventory_Item_Operation_Deactivate;
	DeactivatePayload.Item = Item;
	return FInventoryFragmentPayloadUtils::MakeFragmentPayload(DeactivatePayload);
}

TInstancedStruct<FInventoryFragmentPayload> UNinjaInventoryGameplayFunctionLibrary::CreateDropPayload(
	UNinjaInventoryItem* Item, const FVector& Location, const bool bIsLocalOnly)
{
	FInventoryFragmentPickupOperationPayload DropPayload;
	DropPayload.OperationTag = Tag_Inventory_Item_Operation_Drop;
	DropPayload.Item = Item;
	DropPayload.Location = Location;
	DropPayload.bIsLocalOnly = bIsLocalOnly;
	return FInventoryFragmentPayloadUtils::MakeFragmentPayload(DropPayload);
}

TInstancedStruct<FInventoryFragmentPayload> UNinjaInventoryGameplayFunctionLibrary::CreateRepairPayload(
	UNinjaInventoryItem* Item)
{
	FInventoryFragmentDurabilityOperationPayload RepairPayload;
	RepairPayload.OperationTag = Tag_Inventory_Item_Operation_Repair;
	RepairPayload.Item = Item;
	return FInventoryFragmentPayloadUtils::MakeFragmentPayload(RepairPayload);
}

TInstancedStruct<FInventoryFragmentPayload> UNinjaInventoryGameplayFunctionLibrary::CreateSplitPayload(
	UNinjaInventoryItem* Item, const int32 SplitSize)
{
	FInventoryFragmentStackOperationPayload SplitPayload;
	SplitPayload.OperationTag = Tag_Inventory_Item_Operation_Split;
	SplitPayload.Item = Item;
	SplitPayload.SplitSize = SplitSize;
	return FInventoryFragmentPayloadUtils::MakeFragmentPayload(SplitPayload);
}

TInstancedStruct<FInventoryFragmentPayload> UNinjaInventoryGameplayFunctionLibrary::CreateUpgradePayload(
	UNinjaInventoryItem* Item, const int32 Value, const bool bIsIncremental)
{
	FInventoryFragmentLevelOperationPayload LevelPayload;
	LevelPayload.OperationTag = Tag_Inventory_Item_Operation_Upgrade;
	LevelPayload.Item = Item;
	LevelPayload.Value = Value;
	LevelPayload.bIsIncremental = bIsIncremental;
	return FInventoryFragmentPayloadUtils::MakeFragmentPayload(LevelPayload);
}

TInstancedStruct<FInventoryFragmentPayload> UNinjaInventoryGameplayFunctionLibrary::CreateWearPayload(
	UNinjaInventoryItem* Item, const int32 WearAmount)
{
	FInventoryFragmentDurabilityOperationPayload DurabilityPayload;
	DurabilityPayload.OperationTag = Tag_Inventory_Item_Operation_Wear;
	DurabilityPayload.Item = Item;
	DurabilityPayload.WearAmount = WearAmount;
	return FInventoryFragmentPayloadUtils::MakeFragmentPayload(DurabilityPayload);
}
