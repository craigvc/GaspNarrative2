// Ninja Bear Studio Inc., all rights reserved.
#include "Async/NinjaInventoryAction_WaitForInventorySystem.h"

#include "NinjaInventoryFunctionLibrary.h"
#include "NinjaInventoryLog.h"
#include "TimerManager.h"
#include "Components/NinjaInventoryManagerComponent.h"
#include "Engine/Engine.h"
#include "Engine/GameInstance.h"
#include "Engine/World.h"
#include "GameFramework/Actor.h"

UNinjaInventoryAction_WaitForInventorySystem* UNinjaInventoryAction_WaitForInventorySystem::CreateAction(
	UObject* Context, AActor* InventoryOwner, const float CheckInterval, const float MaxWait)
{
	UWorld* World = GEngine->GetWorldFromContextObject(Context, EGetWorldErrorMode::ReturnNull);
	if (!IsValid(World))
	{
		INVENTORY_STATIC_LOG(Warning, "Unable to obtain a World from Component!");
		return nullptr;
	}

	if (!IsValid(InventoryOwner))
	{
		INVENTORY_STATIC_LOG(Warning, "Inventory Owner is null!");
		return nullptr;
	}
	
	UNinjaInventoryAction_WaitForInventorySystem* Action = NewInventoryAction<UNinjaInventoryAction_WaitForInventorySystem>(World, CheckInterval, MaxWait);
	if (IsValid(Action))
	{
		Action->InventoryOwnerPtr = InventoryOwner;
	}
	
	return Action;
}

AActor* UNinjaInventoryAction_WaitForInventorySystem::GetInventoryOwner() const
{
	return InventoryOwnerPtr.IsValid() ? InventoryOwnerPtr.Get() : nullptr;
}

void UNinjaInventoryAction_WaitForInventorySystem::ExecuteAction_Implementation()
{
	const AActor* InventoryOwner = GetInventoryOwner();
	if (!IsValid(InventoryOwner))
	{
		Cancel();
		return;
	}

	UNinjaInventoryManagerComponent* InventoryManager = UNinjaInventoryFunctionLibrary::GetInventoryManager(InventoryOwner);
	if (IsValid(InventoryManager))
	{
		if (InventoryManager->IsInventoryInitialized())
		{
			INVENTORY_LOG_ARGS(Verbose, "Accepted Inventory Manager Component from '%s'.", *GetNameSafe(InventoryOwner));
			Complete();
		}
		else
		{
			// The inventory was found, so we can stop accumulating time and just wait for the initialization.
			INVENTORY_LOG_ARGS(Verbose, "Found Inventory Manager Component from '%s' Waiting for initialization...", *GetNameSafe(InventoryOwner));
			InventoryManager->OnInventoryInitialized.AddUniqueDynamic(this, &ThisClass::HandleInventoryInitialized);
		}
	}
	
	AccumulateElapsedTime();
}

void UNinjaInventoryAction_WaitForInventorySystem::HandleInventoryInitialized()
{
	const AActor* InventoryOwner = GetInventoryOwner();
	checkf(IsValid(InventoryOwner), TEXT("Sanity check: Inventory Owner has been validated before!"));
	
	UNinjaInventoryManagerComponent* InventoryManager = UNinjaInventoryFunctionLibrary::GetInventoryManager(InventoryOwner);
	checkf(IsValid(InventoryManager) && InventoryManager->IsInventoryInitialized(), TEXT("Sanity check: Inventory was supposed to be initialized!"));
	INVENTORY_LOG_ARGS(Verbose, "Accepted Inventory Manager Component from '%s'.", *GetNameSafe(InventoryOwner));
	
	InventoryManager->OnInventoryInitialized.RemoveAll(this);
	Complete();
}
