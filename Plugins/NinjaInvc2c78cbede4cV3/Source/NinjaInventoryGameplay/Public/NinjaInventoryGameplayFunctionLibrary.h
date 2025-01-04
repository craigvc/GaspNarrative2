// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Types/FInventoryContainerContext.h"
#include "Types/FInventoryDefaultItemMemory.h"
#include "Types/FItemFragmentOperationPayload.h"
#include "NinjaInventoryGameplayFunctionLibrary.generated.h"

class UNinjaInventoryContainer;
class UNinjaInventoryContainerDataAsset;
class UNinjaInventoryItemFragment;

/**
 * Support functions for the Gameplay layer in the Inventory System.
 */
UCLASS()
class NINJAINVENTORYGAMEPLAY_API UNinjaInventoryGameplayFunctionLibrary : public UBlueprintFunctionLibrary
{
	
	GENERATED_BODY()

public:

	/** 
	 * Checks if the Item is stored in an Equipment Container.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Gameplay")
	static bool InEquipmentContainer(const UNinjaInventoryItem* Item);

	/**
	 * Checks if the Container is configured as an Equipment Slot.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Gameplay")
	static bool IsEquipmentContainer(const UNinjaInventoryContainer* Container);
	
	/**
	 * Creates a default memory that can be used by a Container Fragment.
	 *
	 * @param PrimaryContainer		Default container used as a primary container.
	 * @param Position				Position to place the item in the container.
	 * @return						A default Item Memory that can be used with the Container Fragment.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Gameplay", meta = (ReturnDisplayName = "Container Memory"))
	static FInventoryDefaultItemMemory CreateContainerMemory(const UNinjaInventoryContainerDataAsset* PrimaryContainer, int32 Position);

	/**
	 * Creates a default memory that can be used by a Stack Fragment.
	 *
	 * @param StackSize				Size of the stack to be assigned to the item.
	 * @return						A default Item Memory that can be used with the Stack Fragment.
	 */	
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Gameplay", meta = (ReturnDisplayName = "Stack Memory"))
	static FInventoryDefaultItemMemory CreateStackMemory(int32 StackSize);

	/**
	 * Creates a default memory that can be used by a Durability Fragment.
	 *
	 * @param Durability			Current durability for an item.
	 * @return						A default Item Memory that can be used with the Durability Fragment.
	 */		
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Gameplay", meta = (ReturnDisplayName = "Durability Memory"))
	static FInventoryDefaultItemMemory CreateDurabilityMemory(float Durability);

	/**
	 * Creates a default memory that can be used by a Level Fragment.
	 *
	 * @param Level					Level that will be assigned to the item.
	 * @return						A default Item Memory that can be used with the Level Fragment.
	 */		
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Gameplay", meta = (ReturnDisplayName = "Level Memory"))
	static FInventoryDefaultItemMemory CreateLevelMemory(float Level);
	
	/**
	 * Creates a payload that can be used for an Activate operation.
	 *
	 * @param Item					Item targeted for the Activate operation.
	 * @return						The instanced struct fully configured for the operation.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Gameplay", meta = (ReturnDisplayName = "Activate Payload"))
	static TInstancedStruct<FInventoryFragmentPayload> CreateActivatePayload(UNinjaInventoryItem* Item);

	/**
	 * Creates a payload that can be used for a Combine operation.
	 *
	 * @param Item					Item targeted for the Combine operation.
	 * @param ItemToCombine			Item to combine with.
	 * @return						The instanced struct fully configured for the operation.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Gameplay", meta = (ReturnDisplayName = "Combine Payload"))
	static TInstancedStruct<FInventoryFragmentPayload> CreateCombinePayload(UNinjaInventoryItem* Item, UNinjaInventoryItem* ItemToCombine);
	
	/**
	 * Creates a payload that can be used for a Consume operation.
	 *
	 * @param Item					Item targeted for the Consume operation.
	 * @return						The instanced struct fully configured for the operation.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Gameplay", meta = (ReturnDisplayName = "Consume Payload"))
	static TInstancedStruct<FInventoryFragmentPayload> CreateConsumePayload(UNinjaInventoryItem* Item);

	/**
	 * Creates a payload that can be used for a Deactivate operation.
	 *
	 * @param Item					Item targeted for the Deactivate operation.
	 * @return						The instanced struct fully configured for the operation.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Gameplay", meta = (ReturnDisplayName = "Deactivate Payload"))
	static TInstancedStruct<FInventoryFragmentPayload> CreateDeactivatePayload(UNinjaInventoryItem* Item);

	/**
	 * Creates a payload that can be used for a Drop operation.
	 *
	 * @param Item					Item targeted for the Drop operation.
	 * @param Location				Location where the item will be dropped.
	 * @param bIsLocalOnly			Drops the item only for the local player.
	 * @return						The instanced struct fully configured for the operation.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Gameplay", meta = (ReturnDisplayName = "Drop Payload"))
	static TInstancedStruct<FInventoryFragmentPayload> CreateDropPayload(UNinjaInventoryItem* Item, const FVector& Location, bool bIsLocalOnly);
	
	/**
	 * Creates a payload that can be used for a Move operation.
	 *
	 * @param Item					Item targeted for the Move operation.
	 * @param Container				Container where the item will be moved to.
	 * @param Position				Position in the container.
	 * @return						The instanced struct fully configured for the operation.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Gameplay", meta = (ReturnDisplayName = "Move Payload"))
	static TInstancedStruct<FInventoryFragmentPayload> CreateMovePayload(UNinjaInventoryItem* Item, UNinjaInventoryContainer* Container, int32 Position);

	/**
	 * Creates a payload that can be used for a Repair operation.
	 *
	 * @param Item					Item targeted for the Repair operation.
	 * @return						The instanced struct fully configured for the operation.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Gameplay", meta = (ReturnDisplayName = "Repair Payload"))
	static TInstancedStruct<FInventoryFragmentPayload> CreateRepairPayload(UNinjaInventoryItem* Item);

	/**
	 * Creates a payload that can be used for a Split operation.
	 *
	 * @param Item					Item targeted for the Split operation.
	 * @param SplitSize				Size for the new stack
	 * @return						The instanced struct fully configured for the operation.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Gameplay", meta = (ReturnDisplayName = "Split Payload"))
	static TInstancedStruct<FInventoryFragmentPayload> CreateSplitPayload(UNinjaInventoryItem* Item, int32 SplitSize);
	
	/**
	 * Creates a payload that can be used for a Swap operation.
	 *
	 * @param Item					Item targeted for the Swap operation.
	 * @param ItemToSwap			Item to be swapped.
	 * @return						The instanced struct fully configured for the operation.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Gameplay", meta = (ReturnDisplayName = "Swap Payload"))
	static TInstancedStruct<FInventoryFragmentPayload> CreateSwapPayload(UNinjaInventoryItem* Item, UNinjaInventoryItem* ItemToSwap);

	/**
	 * Creates a payload that can be used for an Upgrade operation.
	 *
	 * @param Item					Item targeted for the Repair operation.
	 * @param Value					A value that can be set as the new level or as an increment.
	 * @param bIsIncremental		If set to true, uses the value as an incremental upgrade. Otherwise, the value is absolute.
	 * @return						The instanced struct fully configured for the operation.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Gameplay", meta = (ReturnDisplayName = "Upgrade Payload"))
	static TInstancedStruct<FInventoryFragmentPayload> CreateUpgradePayload(UNinjaInventoryItem* Item, int32 Value, bool bIsIncremental);
	
	/**
	 * Creates a payload that can be used for a Wear operation.
	 *
	 * @param Item					Item targeted for the Wear operation.
	 * @param WearAmount			How much wear to add to the item. 
	 * @return						The instanced struct fully configured for the operation.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Gameplay", meta = (ReturnDisplayName = "Wear Payload"))
	static TInstancedStruct<FInventoryFragmentPayload> CreateWearPayload(UNinjaInventoryItem* Item, int32 WearAmount = 10);	
	
};
