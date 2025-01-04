// Ninja Bear Studio Inc., all rights reserved.
#include "NinjaInventoryFunctionLibrary.h"

#include "Blueprint/UserWidget.h"
#include "Components/ActorComponent.h"
#include "Components/NinjaInventoryManagerComponent.h"
#include "Data/NinjaInventoryItemDataAsset.h"
#include "GameFramework/Controller.h"
#include "GameFramework/NinjaInventoryItemFragment.h"
#include "GameFramework/Pawn.h"
#include "GameFramework/PlayerState.h"
#include "Interfaces/InventoryManagerProviderInterface.h"
#include "Interfaces/Aspects/DroppableItemInterface.h"
#include "Interfaces/Aspects/LootableItemInterface.h"
#include "Interfaces/Aspects/StackableItemInterface.h"
#include "Interfaces/Aspects/StorableItemInterface.h"
#include "Interfaces/Aspects/UpgradeableItemInterface.h"
#include "Types/FInventoryItemContext.h"

UNinjaInventoryManagerComponent* UNinjaInventoryFunctionLibrary::GetInventoryManager(const UObject* Context)
{
	if (!IsValid(Context))
	{
		return nullptr;
	}
	
	if (Context->Implements<UInventoryManagerProviderInterface>())
	{
		UNinjaInventoryManagerComponent* InventoryManager = IInventoryManagerProviderInterface::Execute_GetInventoryManager(Context);
		if (IsValid(InventoryManager))
		{
			return InventoryManager;
		}
	}
	
	if (Context->IsA<APawn>())
	{
		const APawn* PawnOwner = Cast<APawn>(Context);
		return GetInventoryManagerFromPawn(PawnOwner);
	}

	if (Context->IsA<APlayerState>())
	{
		const APlayerState* PlayerStateOwner = Cast<APlayerState>(Context);
		return GetInventoryManagerFromPlayerState(PlayerStateOwner);
	}

	if (Context->IsA<AController>())
	{
		const AController* ControllerOwner = Cast<AController>(Context);
		return GetInventoryManagerFromController(ControllerOwner);
	}
	
	if (Context->IsA<AActor>())
	{
		const AActor* ActorOwner = Cast<AActor>(Context);
		return ActorOwner->FindComponentByClass<UNinjaInventoryManagerComponent>();
	}

	if (Context->IsA<UUserWidget>())
	{
		const UUserWidget* WidgetOwner = Cast<UUserWidget>(Context);
		const APlayerState* PlayerStateOwner = WidgetOwner->GetOwningPlayerState();
		return GetInventoryManagerFromPlayerState(PlayerStateOwner);
	}

	if (Context->IsA<UActorComponent>())
	{
		const UActorComponent* ActorComponentContext = Cast<UActorComponent>(Context);
		return GetInventoryManager(ActorComponentContext->GetOwner());
	}

	return nullptr;
}

FInventoryContainerContext UNinjaInventoryFunctionLibrary::CreateContainerContext(
	const UNinjaInventoryContainerDataAsset* ContainerData, UNinjaInventoryItem* SourceItem)
{
	FInventoryContainerContext Context;
	Context.SetContainerData(ContainerData);
	Context.SetOwningItem(SourceItem);
	return Context;
}

FInventoryItemContext UNinjaInventoryFunctionLibrary::CreateItemContext(
	const UNinjaInventoryItemDataAsset* ItemData, const TArray<FInventoryDefaultItemMemory>& DefaultMemories)
{
	FInventoryItemContextEntry Entry;
	Entry.ItemData = ItemData;
	Entry.FragmentMemories = DefaultMemories;

	FInventoryItemContext Context;
	Context.Request = Entry;

	return Context;
}

TScriptInterface<IDroppableItemInterface> UNinjaInventoryFunctionLibrary::GetDroppableItemAspect(const UNinjaInventoryItemDataAsset* ItemData)
{
	TScriptInterface<IDroppableItemInterface> Interface;
	
	if (IsValid(ItemData))
	{
		UNinjaInventoryItemFragment* Fragment = ItemData->FindFragmentByInterface(UDroppableItemInterface::StaticClass());
		Interface.SetObject(Fragment);
		Interface.SetInterface(Cast<IDroppableItemInterface>(Fragment));
	}
	
	return Interface;
}

TScriptInterface<ILootableItemInterface> UNinjaInventoryFunctionLibrary::GetLootableItemAspect(const UNinjaInventoryItemDataAsset* ItemData)
{
	TScriptInterface<ILootableItemInterface> Interface;
	
	if (IsValid(ItemData))
	{
		UNinjaInventoryItemFragment* Fragment = ItemData->FindFragmentByInterface(ULootableItemInterface::StaticClass());
		Interface.SetObject(Fragment);
		Interface.SetInterface(Cast<ILootableItemInterface>(Fragment));
	}
	
	return Interface;
}

TScriptInterface<IStackableItemInterface> UNinjaInventoryFunctionLibrary::GetStackableItemAspect(const UNinjaInventoryItemDataAsset* ItemData)
{
	TScriptInterface<IStackableItemInterface> Interface;
	
	if (IsValid(ItemData))
	{
		UNinjaInventoryItemFragment* Fragment = ItemData->FindFragmentByInterface(UStackableItemInterface::StaticClass());
		Interface.SetObject(Fragment);
		Interface.SetInterface(Cast<IStackableItemInterface>(Fragment));
	}
	
	return Interface;	
}

TScriptInterface<IStorableItemInterface> UNinjaInventoryFunctionLibrary::GetStorableItemAspect(const UNinjaInventoryItemDataAsset* ItemData)
{
	TScriptInterface<IStorableItemInterface> Interface;
	
	if (IsValid(ItemData))
	{
		UNinjaInventoryItemFragment* Fragment = ItemData->FindFragmentByInterface(UStorableItemInterface::StaticClass());
		Interface.SetObject(Fragment);
		Interface.SetInterface(Cast<IStorableItemInterface>(Fragment));
	}
	
	return Interface;		
}

TScriptInterface<IUpgradeableItemInterface> UNinjaInventoryFunctionLibrary::GetUpgradeableItemAspect(
	const UNinjaInventoryItemDataAsset* ItemData)
{
	TScriptInterface<IUpgradeableItemInterface> Interface;
	
	if (IsValid(ItemData))
	{
		UNinjaInventoryItemFragment* Fragment = ItemData->FindFragmentByInterface(UUpgradeableItemInterface::StaticClass());
		Interface.SetObject(Fragment);
		Interface.SetInterface(Cast<IUpgradeableItemInterface>(Fragment));
	}
	
	return Interface;		
}

EInventoryContextState UNinjaInventoryFunctionLibrary::GetContainerContextState(const FInventoryContainerContext& ContainerContext)
{
	if (!ContainerContext.IsValid())
	{
		return EInventoryContextState::Empty;
	}

	if (ContainerContext.IsFailed())
	{
		return EInventoryContextState::Failed;
	}

	if (!ContainerContext.GetContainerId().IsValid())
	{
		return EInventoryContextState::NotExecuted;
	}
	
	return EInventoryContextState::Succeeded;
}

EInventoryContextState UNinjaInventoryFunctionLibrary::GetItemContextState(const FInventoryItemContext& ItemContext)
{
	// Without an original request, the context is empty.
	if (!ItemContext.Request.IsValid() && !HasCreatedOrUpdatedItems(ItemContext))
	{
		return EInventoryContextState::Empty;
	}

	if (!HasCreatedOrUpdatedItems(ItemContext))
	{
		if (!HasDroppedItems(ItemContext))
		{
			// All output values are empty, but there is a request. This
			// is a valid context that hasn't been executed yet.
			return EInventoryContextState::NotExecuted;
		}
		
		// No items created or added, but we have items to drop.
		// This means all items were refused by the Inventory Manager.
		return EInventoryContextState::Failed;
	}

	if (HasDroppedItems(ItemContext))
	{
		// We have created or updated items, but some items were dropped.
		// This means the context was handled but not all items were accepted.
		return EInventoryContextState::PartiallySucceeded;
	}

	// Items were created and updated, no items were dropped. Success!
	return EInventoryContextState::Succeeded;
}

bool UNinjaInventoryFunctionLibrary::WasFullyProcessed(const FInventoryItemContext& ItemContext)
{
	return HasCreatedOrUpdatedItems(ItemContext) || HasDroppedItems(ItemContext);
}

bool UNinjaInventoryFunctionLibrary::HasCreatedItems(const FInventoryItemContext& ItemContext)
{
	return ItemContext.CreatedItems.Num() > 0;
}

bool UNinjaInventoryFunctionLibrary::HasUpdatedItems(const FInventoryItemContext& ItemContext)
{
	return ItemContext.UpdatedItems.Num() > 0;
}

bool UNinjaInventoryFunctionLibrary::HasCreatedOrUpdatedItems(const FInventoryItemContext& ItemContext)
{
	return HasCreatedItems(ItemContext) || HasUpdatedItems(ItemContext);
}

bool UNinjaInventoryFunctionLibrary::HasDroppedItems(const FInventoryItemContext& ItemContext)
{
	return ItemContext.DroppedItemsCount > 0;
}

void UNinjaInventoryFunctionLibrary::OnContainerContextResult(const FInventoryContainerContext& ContainerContext, EInventoryContextState& OutState)
{
	OutState = GetContainerContextState(ContainerContext);
}

void UNinjaInventoryFunctionLibrary::OnItemContextResult(const FInventoryItemContext& ItemContext, EInventoryContextState& OutState)
{
	OutState = GetItemContextState(ItemContext);
}

UNinjaInventoryManagerComponent* UNinjaInventoryFunctionLibrary::GetInventoryManagerFromPawn(const APawn* PawnOwner)
{
	if (!IsValid(PawnOwner))
	{
		return nullptr;
	}
	
	UNinjaInventoryManagerComponent* InventoryManager = PawnOwner->FindComponentByClass<UNinjaInventoryManagerComponent>();
	if (IsValid(InventoryManager))
	{
		return InventoryManager;
	}
	
	const APlayerState* PlayerState = PawnOwner->GetPlayerState();
	InventoryManager = PlayerState ? PlayerState->FindComponentByClass<UNinjaInventoryManagerComponent>() : nullptr;
	if (IsValid(InventoryManager))
	{
		return InventoryManager;
	}
	
	const AController* Controller = PawnOwner->GetController();
	InventoryManager = Controller ? Controller->FindComponentByClass<UNinjaInventoryManagerComponent>() : nullptr;
	if (IsValid(Controller))
	{
		return InventoryManager;
	}

	return nullptr;
}

UNinjaInventoryManagerComponent* UNinjaInventoryFunctionLibrary::GetInventoryManagerFromPlayerState(const APlayerState* PlayerStateOwner)
{
	if (!IsValid(PlayerStateOwner))
	{
		return nullptr;
	}
	
	UNinjaInventoryManagerComponent* InventoryManager = PlayerStateOwner->FindComponentByClass<UNinjaInventoryManagerComponent>();
	if (IsValid(InventoryManager))
	{
		return InventoryManager;
	}
	
	const APawn* Pawn = PlayerStateOwner->GetPawn();
	InventoryManager = Pawn ? Pawn->FindComponentByClass<UNinjaInventoryManagerComponent>() : nullptr;
	if (IsValid(InventoryManager))
	{
		return InventoryManager;
	}
	
	const AController* Controller = PlayerStateOwner->GetOwningController();
	InventoryManager = Controller ? Controller->FindComponentByClass<UNinjaInventoryManagerComponent>() : nullptr;
	if (IsValid(Controller))
	{
		return InventoryManager;
	}

	return nullptr;
}

UNinjaInventoryManagerComponent* UNinjaInventoryFunctionLibrary::GetInventoryManagerFromController(const AController* ControllerOwner)
{
	if (!IsValid(ControllerOwner))
	{
		return nullptr;
	}

	UNinjaInventoryManagerComponent* InventoryManager = ControllerOwner->FindComponentByClass<UNinjaInventoryManagerComponent>();
	if (IsValid(InventoryManager))
	{
		return InventoryManager;
	}

	const APlayerState* PlayerState = ControllerOwner->GetPlayerState<APlayerState>();
	InventoryManager = PlayerState ? PlayerState->FindComponentByClass<UNinjaInventoryManagerComponent>() : nullptr;
	if (IsValid(InventoryManager))
	{
		return InventoryManager;
	}
	
	const APawn* Pawn = ControllerOwner->GetPawn();
	InventoryManager = Pawn ? Pawn->FindComponentByClass<UNinjaInventoryManagerComponent>() : nullptr;
	if (IsValid(InventoryManager))
	{
		return InventoryManager;
	}
	
	return nullptr;
}
