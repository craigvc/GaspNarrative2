// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "NinjaInventoryAction_BaseWait.h"
#include "NinjaInventoryAction_WaitForAbilitySystem.generated.h"

class AActor;
class UAbilitySystemComponent;
class UNinjaInventoryCoreComponent;
class UWorld;

/**
 * Waits for an Ability System to become available and initialized.
 */
UCLASS()
class NINJAINVENTORYCORE_API UNinjaInventoryAction_WaitForAbilitySystem : public UNinjaInventoryAction_BaseWait
{
	
	GENERATED_BODY()

public:

	/**
	 * Creates the Action to wait for an Ability System Component in an Actor.
	 *
	 * @param Component			Core Inventory Component requesting the task.
	 * @param AbilityOwner		Owner of the Ability System Component, must be valid.
	 * @param CheckInterval		How often the task will check for a valid Ability System Component.
	 * @param MaxWait			Maximum time to wait in seconds.
	 * @return					Configured instance of the async action.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Inventory|Async", DisplayName = "Wait For Ability System", meta = (DefaultToSelf = "Component", BlueprintInternalUseOnly = "true"))
	static UNinjaInventoryAction_WaitForAbilitySystem* CreateAction(UNinjaInventoryCoreComponent* Component, AActor* AbilityOwner, float CheckInterval, float MaxWait = 3.f);
	
	/**
	 * Provides the Core Component assigned to this task.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Async")
	UNinjaInventoryCoreComponent* GetCoreComponent() const;
	
	/**
	 * Provides the Ability Owner set to this task.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Async")
	AActor* GetAbilityOwner() const;
	
protected:

	virtual void ExecuteAction_Implementation() override;

private:

	/** Component that can be used for tests. */
	TWeakObjectPtr<UNinjaInventoryCoreComponent> CoreComponentPtr = nullptr;

	/** Actor that owns the Ability System Component. */
	TWeakObjectPtr<AActor> AbilityOwnerPtr = nullptr;

};
