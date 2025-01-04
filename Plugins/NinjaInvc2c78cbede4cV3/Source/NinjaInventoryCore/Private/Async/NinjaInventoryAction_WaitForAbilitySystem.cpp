// Ninja Bear Studio Inc., all rights reserved.
#include "Async/NinjaInventoryAction_WaitForAbilitySystem.h"

#include "AbilitySystemGlobals.h"
#include "NinjaInventoryLog.h"
#include "TimerManager.h"
#include "Components/NinjaInventoryCoreComponent.h"
#include "Engine/Engine.h"
#include "Engine/GameInstance.h"
#include "Engine/World.h"
#include "GameFramework/Actor.h"

UNinjaInventoryAction_WaitForAbilitySystem* UNinjaInventoryAction_WaitForAbilitySystem::CreateAction(
	UNinjaInventoryCoreComponent* Component, AActor* AbilityOwner, const float CheckInterval, const float MaxWait)
{
	if (!IsValid(Component))
	{
		INVENTORY_STATIC_LOG(Warning, "Invalid Core Component provided!");
		return nullptr;
	}

	UWorld* World = GEngine->GetWorldFromContextObject(Component, EGetWorldErrorMode::ReturnNull);
	if (!IsValid(World))
	{
		INVENTORY_STATIC_LOG(Warning, "Unable to obtain a World from Component!");
		return nullptr;
	}

	if (!IsValid(AbilityOwner))
	{
		INVENTORY_STATIC_LOG(Warning, "Ability Owner is null!");
		return nullptr;
	}

	UNinjaInventoryAction_WaitForAbilitySystem* Action = NewInventoryAction<UNinjaInventoryAction_WaitForAbilitySystem>(World, CheckInterval, MaxWait);
	if (IsValid(Action))
	{
		Action->CoreComponentPtr = Component; 
		Action->AbilityOwnerPtr = AbilityOwner;	
	}
	
	return Action;
}

UNinjaInventoryCoreComponent* UNinjaInventoryAction_WaitForAbilitySystem::GetCoreComponent() const
{
	return CoreComponentPtr.IsValid() ? CoreComponentPtr.Get() : nullptr;
}

AActor* UNinjaInventoryAction_WaitForAbilitySystem::GetAbilityOwner() const
{
	return AbilityOwnerPtr.IsValid() ? AbilityOwnerPtr.Get() : nullptr;
}

void UNinjaInventoryAction_WaitForAbilitySystem::ExecuteAction_Implementation()
{
	const AActor* AbilityOwner = GetAbilityOwner();
	if (!IsValid(AbilityOwner))
	{
		Cancel();
		return;
	}

	const UNinjaInventoryCoreComponent* CoreComponent = GetCoreComponent();
	if (!IsValid(CoreComponent))
	{
		Cancel();
		return;
	}

	const UAbilitySystemComponent* AbilityComponent = UAbilitySystemGlobals::GetAbilitySystemComponentFromActor(AbilityOwner);
	if (CoreComponent->IsValidAbilitySystemComponent(AbilityComponent))
	{
		INVENTORY_LOG_ARGS(Verbose, "Accepted Ability System Component from '%s'.", *GetNameSafe(AbilityOwner));
		Complete();
	}
	
	AccumulateElapsedTime();
}
