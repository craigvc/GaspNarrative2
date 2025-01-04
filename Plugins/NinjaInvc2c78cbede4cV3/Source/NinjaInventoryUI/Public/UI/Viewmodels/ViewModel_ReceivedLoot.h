// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "NinjaInventoryManagerViewModel.h"
#include "ViewModel_ReceivedLoot.generated.h"

class UNinjaInventoryLoot;
class UNinjaInventoryLootComponent;
class UNinjaInventoryManagerComponent;

/**
 * A View Model that can process loot that has been received or discarded by an Inventory Manager.
 */
UCLASS()
class NINJAINVENTORYUI_API UViewModel_ReceivedLoot : public UNinjaInventoryManagerViewModel
{
	
	GENERATED_BODY()

public:

	/**
	 * Informs if there's any selected loot, even if empty.
	 */
	bool HasLoot() const;
	
	/**
	 * Provides the current loot selected. May be empty even if there's loot selected.
	 */
	TArray<UNinjaInventoryLoot*> GetSelectedLoot() const;
	
protected:

	/** Informs if there's loot selected, even if it's empty. */
	UPROPERTY(BlueprintReadOnly, FieldNotify, Category = "Selected Loot", Getter = "HasLoot")
	bool bHasLoot;
	
	/** Consolidated list of all items managed by the inventory. */
	UPROPERTY(BlueprintReadOnly, FieldNotify, Category = "Selected Loot", Getter)
	TArray<UNinjaInventoryLoot*> SelectedLoot;
	
	// -- Begin Inventory Manager View Model implementation
	virtual void BindToInventoryManager_Implementation(UNinjaInventoryManagerComponent* InventoryManager) override;
	virtual void UnbindFromInventoryManager_Implementation(UNinjaInventoryManagerComponent* InventoryManager) override;
	// -- End Inventory Manager View Model implementation

	/**
	 * Handles loot received by the Inventory Manager.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Loot")
	void HandleLootReceived(UNinjaInventoryLootComponent* Source, const TArray<UNinjaInventoryLoot*>& NewSelectedLoot);

	/**
	 * Handles loot dismissed by the owner.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Loot")
	void HandleLootDismissed(UNinjaInventoryLootComponent* Source);
	
};
