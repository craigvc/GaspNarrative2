// Ninja Bear Studio Inc., all rights reserved.
#include "NinjaEquipmentFunctionLibrary.h"

#include "Components/NinjaEquipmentManagerComponent.h"
#include "Components/NinjaInventoryManagerComponent.h"
#include "GameFramework/Controller.h"
#include "GameFramework/Pawn.h"
#include "GameFramework/PlayerState.h"
#include "GameFramework/NinjaInventoryItem.h"
#include "Interfaces/EquipmentManagerProviderInterface.h"

UNinjaEquipmentManagerComponent* UNinjaEquipmentFunctionLibrary::GetEquipmentManager(const AActor* Owner)
{
	UNinjaEquipmentManagerComponent* EquipmentManager = nullptr;
	if (IsValid(Owner))
	{
		// First, attempt to retrieve via the interface which should be faster.
		if (Owner->Implements<UEquipmentManagerProviderInterface>())
		{
			return IEquipmentManagerProviderInterface::Execute_GetEquipmentManager(Owner);
		}

		// Fallback to searching the component on possible actors.
		EquipmentManager = Owner->FindComponentByClass<UNinjaEquipmentManagerComponent>();
		if (!EquipmentManager)
		{
			if (const APlayerState* PlayerStateOwner = Cast<APlayerState>(Owner))
			{
				const APawn* Pawn = PlayerStateOwner->GetPawn();
				EquipmentManager = GetEquipmentManager(Pawn);
			}
			else if (const AController* ControllerOwner = Cast<AController>(Owner))
			{
				const APawn* Pawn = ControllerOwner->GetPawn();
				EquipmentManager = GetEquipmentManager(Pawn);
			}
		}
	}

	return EquipmentManager;
}

UNinjaEquipmentManagerComponent* UNinjaEquipmentFunctionLibrary::GetEquipmentManagerForInventory(const UNinjaInventoryManagerComponent* InventoryManager)
{
	if (IsValid(InventoryManager))
	{
		const AActor* InventoryOwner = InventoryManager->GetOwner();
		return GetEquipmentManager(InventoryOwner);	
	}

	return nullptr;
}

UNinjaEquipmentManagerComponent* UNinjaEquipmentFunctionLibrary::GetEquipmentManagerForItem(const UNinjaInventoryItem* Item)
{
	if (IsValid(Item))
	{
		const UNinjaInventoryManagerComponent* InventoryManager = Item->GetInventoryManager();
		return GetEquipmentManagerForInventory(InventoryManager);
	}

	return nullptr;
}

UNinjaEquipment* UNinjaEquipmentFunctionLibrary::GetEquipmentForItem(const UNinjaInventoryItem* Item)
{
	const UNinjaEquipmentManagerComponent* EquipmentManager = GetEquipmentManagerForItem(Item);
	if (IsValid(EquipmentManager))
	{
		return EquipmentManager->GetEquipmentByItem(Item);
	}

	return nullptr;
}
