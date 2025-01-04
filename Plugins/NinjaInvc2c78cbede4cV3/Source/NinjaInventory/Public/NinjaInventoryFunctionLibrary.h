// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Types/FInventoryItemContext.h"
#include "UObject/ScriptInterface.h"
#include "NinjaInventoryFunctionLibrary.generated.h"

struct FInventoryItemContext;
struct FInventoryContainerContext;
struct FInventoryItemContext;

class AController;
class APawn;
class APlayerState;
class IDroppableItemInterface;
class ILootableItemInterface;
class IStackableItemInterface;
class IStorableItemInterface;
class IUpgradeableItemInterface;
class UNinjaInventoryContainerDataAsset;
class UNinjaInventoryItemDataAsset;
class UNinjaInventoryItemFragment;
class UNinjaInventoryManagerComponent;

/**
 * Support functions for the Inventory System. 
 */
UCLASS()
class NINJAINVENTORY_API UNinjaInventoryFunctionLibrary : public UBlueprintFunctionLibrary
{
	
	GENERATED_BODY()

public:

	/**
	 * Provides the Inventory Manager assigned to an actor.
	 * 
	 * It will evaluate the context against multiple common object types and
	 * try to obtain the Inventory Manager in the best way possible.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory", meta = (DefaultToSelf = "Context", ReturnDisplayName = "Inventory Manager"))
	static UNinjaInventoryManagerComponent* GetInventoryManager(const UObject* Context);

	/**
	 * Creates a container context used to grant a new container to the inventory.
	 *
	 * @param ContainerData			Container Data used for the context.
	 * @param SourceItem			An optional item that is granting the container.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory", meta = (ReturnDisplayName = "Container Context", AdvancedDisplay = 1))
	static FInventoryContainerContext CreateContainerContext(const UNinjaInventoryContainerDataAsset* ContainerData, UNinjaInventoryItem* SourceItem);
	
	/**
	 * Creates an item context used to grant a new item to the inventory.
	 *
	 * @param ItemData				Item Data used for the context entry.
	 * @param DefaultMemories		All memories applied by default to the item.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory", meta = (ReturnDisplayName = "Item Context"))
	static FInventoryItemContext CreateItemContext(const UNinjaInventoryItemDataAsset* ItemData, const TArray<FInventoryDefaultItemMemory>& DefaultMemories);
	
	/**
	 * Provides a pointer to a Droppable Item abstraction.
	 *
	 * @param ItemData			The data asset for the item providing the fragment. Must be valid.
	 * @return					Interface abstracting a Droppable Item fragment.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory", meta = (DefaultToSelf = "Context", ReturnDisplayName = "Droppable Item"))
	static TScriptInterface<IDroppableItemInterface> GetDroppableItemAspect(const UNinjaInventoryItemDataAsset* ItemData);

	/**
	 * Provides a pointer to a Lootable Item abstraction.
	 *
	 * @param ItemData			The data asset for the item providing the fragment. Must be valid.
	 * @return					Interface abstracting a Lootable Item fragment.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory", meta = (DefaultToSelf = "Context", ReturnDisplayName = "Lootable Item"))
	static TScriptInterface<ILootableItemInterface> GetLootableItemAspect(const UNinjaInventoryItemDataAsset* ItemData);
	
	/**
	 * Provides a pointer to a Stackable Item abstraction.
	 *
	 * @param ItemData			The data asset for the item providing the fragment. Must be valid.
	 * @return					Interface abstracting a Stackable Item fragment.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory", meta = (DefaultToSelf = "Context", ReturnDisplayName = "Stackable Item"))
	static TScriptInterface<IStackableItemInterface> GetStackableItemAspect(const UNinjaInventoryItemDataAsset* ItemData);

	/**
	 * Provides a pointer to a Storable Item abstraction.
	 *
	 * @param ItemData			The data asset for the item providing the fragment. Must be valid.
	 * @return					Interface abstracting a Storable Item fragment.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory", meta = (DefaultToSelf = "Context", ReturnDisplayName = "Storable Item"))
	static TScriptInterface<IStorableItemInterface> GetStorableItemAspect(const UNinjaInventoryItemDataAsset* ItemData);

	/**
	 * Provides a pointer to an Upgradeable Item abstraction.
	 *
	 * @param ItemData			The data asset for the item providing the fragment. Must be valid.
	 * @return					Interface abstracting an Upgradeable Item fragment.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory", meta = (DefaultToSelf = "Context", ReturnDisplayName = "Upgradeable Item"))
	static TScriptInterface<IUpgradeableItemInterface> GetUpgradeableItemAspect(const UNinjaInventoryItemDataAsset* ItemData);

	/**
	 * Checks if the provided context was fully executed.
	 *
	 * @param ContainerContext	The container context to be evaluated.
	 * @return					State for the context.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory", meta = (ReturnDisplayName = "State"))
	static EInventoryContextState GetContainerContextState(const FInventoryContainerContext& ContainerContext);
	
	/**
	 * Checks if the provided context was fully executed.
	 *
	 * @param ItemContext		The item context to be evaluated.
	 * @return					State for the context.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory", meta = (ReturnDisplayName = "State"))
	static EInventoryContextState GetItemContextState(const FInventoryItemContext& ItemContext);

	/**
	 * Checks if the provided context was fully processed, meaning it has added, updated or dropped items.
	 *
	 * @param ItemContext		The item context to be queried.
	 * @return					True if the context has been processed, regardless of result.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory", meta = (ReturnDisplayName = "Any Items"))
	static bool WasFullyProcessed(const FInventoryItemContext& ItemContext);
	
	/**
	 * Checks if the provided context created new items.
	 *
	 * @param ItemContext		The item context to be queried.
	 * @return					True if the context resulted in new items.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory", meta = (ReturnDisplayName = "Created Items"))
	static bool HasCreatedItems(const FInventoryItemContext& ItemContext);

	/**
	 * Checks if the provided context updated items.
	 *
	 * @param ItemContext		The item context to be queried.
	 * @return					True if the context resulted in updated items.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory", meta = (ReturnDisplayName = "Updated Items"))
	static bool HasUpdatedItems(const FInventoryItemContext& ItemContext);

	/**
	 * Checks if the provided context created or updated items.
	 *
	 * @param ItemContext		The item context to be queried.
	 * @return					True if the context resulted in created or updated items.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory", meta = (ReturnDisplayName = "Any Items"))
	static bool HasCreatedOrUpdatedItems(const FInventoryItemContext& ItemContext);
	
	/**
	 * Checks if the provided context updated items.
	 *
	 * @param ItemContext		The item context to be queried.
	 * @return					True if the context resulted in dropped items.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory", meta = (ReturnDisplayName = "Dropped Items"))
	static bool HasDroppedItems(const FInventoryItemContext& ItemContext);

	/**
	 * Allows a blueprint to perform a control flow based on the state of a container context.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Inventory", meta = (ExpandEnumAsExecs = "OutState"))
	static void OnContainerContextResult(const FInventoryContainerContext& ContainerContext, EInventoryContextState& OutState);
	
	/**
	 * Allows a blueprint to perform a control flow based on the state of an item context.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Inventory", meta = (ExpandEnumAsExecs = "OutState"))
	static void OnItemContextResult(const FInventoryItemContext& ItemContext, EInventoryContextState& OutState);

private:

	/** Helper method to retrieve the Inventory Manager from a Pawn. */
	static UNinjaInventoryManagerComponent* GetInventoryManagerFromPawn(const APawn* PawnOwner);

	/** Helper method to retrieve the Inventory Manager from a Player State. */
	static UNinjaInventoryManagerComponent* GetInventoryManagerFromPlayerState(const APlayerState* PlayerStateOwner);	

	/** Helper method to retrieve the Inventory Manager from a Controller. */
	static UNinjaInventoryManagerComponent* GetInventoryManagerFromController(const AController* ControllerOwner);
	
};
