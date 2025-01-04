// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "Async/NinjaInventoryAction_BaseWait.h"
#include "NinjaInventoryAction_WaitForInventorySystem.generated.h"

/**
 * Waits for an Inventory System to become available and initialized.
 */
UCLASS()
class NINJAINVENTORY_API UNinjaInventoryAction_WaitForInventorySystem : public UNinjaInventoryAction_BaseWait
{
	
	GENERATED_BODY()

public:

	/**
	 * Creates the Action to wait for an Inventory Component in an Actor.
	 *
	 * @param Context			Context used to obtain the world.
	 * @param InventoryOwner	Owner of the Inventory Manager Component, must be valid.
	 * @param CheckInterval		How often the task will check for a valid Inventory Manager Component.
	 * @param MaxWait			Maximum time to wait in seconds.
	 * @return					Configured instance of the async task.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Inventory|Async", DisplayName = "Wait For Inventory System", meta = (WorldContext = "Context", BlueprintInternalUseOnly = "true"))
	static UNinjaInventoryAction_WaitForInventorySystem* CreateAction(UObject* Context, AActor* InventoryOwner, float CheckInterval, float MaxWait = 3.f);

	/**
	 * Provides the Inventory Owner set to this task.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Async")
	AActor* GetInventoryOwner() const;	
	
protected:

	virtual void ExecuteAction_Implementation() override;

	/**
	 * Broadcasts when the Inventory finishes initializing
	 */
	UFUNCTION()
	void HandleInventoryInitialized();

private:

	/** Actor that owns the Inventory Manager Component. */
	TWeakObjectPtr<AActor> InventoryOwnerPtr = nullptr;	

};
