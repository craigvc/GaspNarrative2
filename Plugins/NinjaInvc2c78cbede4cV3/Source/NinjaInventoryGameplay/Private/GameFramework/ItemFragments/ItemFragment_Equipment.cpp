// Ninja Bear Studio Inc., all rights reserved.
#include "GameFramework/ItemFragments/ItemFragment_Equipment.h"

#include "AbilitySystemComponent.h"
#include "NinjaEquipmentFunctionLibrary.h"
#include "NinjaEquipmentTags.h"
#include "NinjaInventoryGameplayTags.h"
#include "NinjaInventoryTags.h"
#include "Components/NinjaEquipmentManagerComponent.h"
#include "Data/NinjaInventoryContainerDataAsset.h"
#include "GameFramework/NinjaInventoryContainer.h"
#include "GameFramework/NinjaEquipment.h"
#include "GameFramework/NinjaInventoryItem.h"
#include "GameFramework/ItemFragments/ItemFragment_Container.h"
#include "Types/FItemFragmentOperationPayload.h"

UItemFragment_Equipment::UItemFragment_Equipment()
{
	ItemTags.AddTagFast(Tag_Inventory_Item_Trait_Equipment);
	OperationTags.AddTagFast(Tag_Inventory_Item_Operation_Activate);
	OperationTags.AddTagFast(Tag_Inventory_Item_Operation_Deactivate);
}

const UNinjaEquipmentDataAsset* UItemFragment_Equipment::GetEquipmentDataAsset() const
{
	return EquipmentData;
}

UNinjaEquipment* UItemFragment_Equipment::GetEquipment(const UNinjaInventoryItem* Item) const
{
	if (!IsValid(Item))
	{
		return nullptr;
	}

	const UNinjaEquipmentManagerComponent* EquipmentManager = UNinjaEquipmentFunctionLibrary::GetEquipmentManagerForItem(Item);
	if (!IsValid(EquipmentManager))
	{
		return nullptr;
	}

	return EquipmentManager->GetEquipmentByItem(Item);	
}

FGameplayTag UItemFragment_Equipment::GetEquipmentState(const UNinjaInventoryItem* Item) const
{
	UNinjaEquipment* Equipment = GetEquipment(Item);
	return IsValid(Equipment) ? Equipment->GetStateTag() : FGameplayTag::EmptyTag;
}

void UItemFragment_Equipment::OnInitializeFragment_Implementation(UNinjaInventoryItem* Item)
{
	UItemFragment_Container* ContainerFragment = Item->FindFragment<UItemFragment_Container>();
	if (IsValid(ContainerFragment))
	{
		ContainerFragment->OnContainerChanged.AddUniqueDynamic(this, &ThisClass::SynchronizeEquipment);
	}
}

void UItemFragment_Equipment::OnApplyFragment_Implementation(UNinjaInventoryItem* Item)
{
	const UItemFragment_Container* ContainerFragment = Item->FindFragment<UItemFragment_Container>();
	if (IsValid(ContainerFragment))
	{
		UNinjaInventoryContainer* Container = ContainerFragment->GetPrimaryContainer(Item);
		SynchronizeEquipment(Item, Container);
	}
}

void UItemFragment_Equipment::SynchronizeEquipment(UNinjaInventoryItem* Item, UNinjaInventoryContainer* Container)
{
	UNinjaEquipmentManagerComponent* EquipmentManager = UNinjaEquipmentFunctionLibrary::GetEquipmentManagerForItem(Item);
	if (!IsValid(EquipmentManager) || !EquipmentManager->OwnerHasAuthority())
	{
		return;
	}

	FGameplayTagContainer ContainerTags;
	Container->GetOwnedGameplayTags(ContainerTags);

	if (ContainerTags.HasTagExact(Tag_Inventory_Container_Equipment))
	{
		HandleEquipmentState(EquipmentManager, Item, Container);
	}
	else
	{
		RemoveEquipment(Item);
	}
}

void UItemFragment_Equipment::HandleEquipmentState(UNinjaEquipmentManagerComponent* EquipmentManager, UNinjaInventoryItem* Item, UNinjaInventoryContainer* Container)
{
	if (EquipmentManager->OwnerHasAuthority())
	{
		const UNinjaInventoryContainerDataAsset* ContainerData = Container->GetData();
		const FGameplayTag StateTag = ContainerData->GetDefaultStateTagOrElse(Tag_Equipment_State_Activated);

		UNinjaEquipment* Equipment = EquipmentManager->GetEquipmentByItem(Item);
		if (IsValid(Equipment))
		{
			EquipmentManager->ChangeEquipmentState(Equipment, StateTag);
		}
		else if (!EquipmentManager->HasItemInInventoryQueue(Item))
		{
			EquipmentManager->InitializeEquipmentForItem(Item);
		}
	}
}

void UItemFragment_Equipment::OnRevertFragment_Implementation(UNinjaInventoryItem* Item)
{
	Super::OnRevertFragment_Implementation(Item);
	RemoveEquipment(Item);
}

bool UItemFragment_Equipment::OnEvaluateOperation_Implementation(const TInstancedStruct<FInventoryFragmentPayload>& Payload) const
{
	const FInventoryFragmentEquipmentOperationPayload& EquipmentPayload = Payload.Get<FInventoryFragmentEquipmentOperationPayload>();
	
	const UNinjaInventoryItem* Item = EquipmentPayload.Item;
	const UNinjaEquipmentManagerComponent* EquipmentManager = UNinjaEquipmentFunctionLibrary::GetEquipmentManagerForItem(Item);
	
	if (!IsValid(EquipmentManager))
	{
		return false;
	}

	const UNinjaEquipment* Equipment = EquipmentManager->GetEquipmentByItem(Item);
	const FGameplayTag StateTag = IsValid(Equipment) ? Equipment->GetStateTag() : FGameplayTag::EmptyTag;

	return (EquipmentPayload.IsActivateOperation() && StateTag == Tag_Equipment_State_Deactivated)
		|| (EquipmentPayload.IsDeactivateOperation() && StateTag == Tag_Equipment_State_Activated);
}

void UItemFragment_Equipment::OnPerformOperation_Implementation(const TInstancedStruct<FInventoryFragmentPayload>& Payload)
{
	const FInventoryFragmentEquipmentOperationPayload& EquipmentPayload = Payload.Get<FInventoryFragmentEquipmentOperationPayload>();

	const UNinjaInventoryItem* Item = EquipmentPayload.Item;
	const UNinjaEquipmentManagerComponent* EquipmentManager = UNinjaEquipmentFunctionLibrary::GetEquipmentManagerForItem(Item);

	UNinjaEquipment* Equipment = EquipmentManager->GetEquipmentByItem(Item);
	UAbilitySystemComponent* AbilitySystem = Equipment->GetAbilitySystemComponent();
	
	if (EquipmentPayload.IsActivateOperation())
	{
		FGameplayEventData GameplayPayload;
		GameplayPayload.EventTag = Tag_Inventory_Event_Equipment_Activate;
		GameplayPayload.OptionalObject = Equipment;
		AbilitySystem->HandleGameplayEvent(Tag_Inventory_Event_Equipment_Activate, &GameplayPayload);
	}
	else if (EquipmentPayload.IsDeactivateOperation())
	{
		FGameplayEventData GameplayPayload;
		GameplayPayload.EventTag = Tag_Inventory_Event_Equipment_Deactivate;
		GameplayPayload.OptionalObject = Equipment;
		AbilitySystem->HandleGameplayEvent(Tag_Inventory_Event_Equipment_Deactivate, &GameplayPayload);
	}
}

UScriptStruct* UItemFragment_Equipment::GetPayloadStruct() const
{
	return FInventoryFragmentEquipmentOperationPayload::StaticStruct();
}

void UItemFragment_Equipment::RemoveEquipment(UNinjaInventoryItem* Item) const
{
	UNinjaEquipmentManagerComponent* EquipmentManager = UNinjaEquipmentFunctionLibrary::GetEquipmentManagerForItem(Item);
	if (IsValid(EquipmentManager) && EquipmentManager->OwnerHasAuthority())
	{
		EquipmentManager->RemoveEquipment(Item);
	}
}
