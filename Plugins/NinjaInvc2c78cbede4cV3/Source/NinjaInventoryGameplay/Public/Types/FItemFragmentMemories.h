// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "Types/FInventoryFragmentMemory.h"
#include "FItemFragmentMemories.generated.h"

class UNinjaInventoryContainer;
class UNinjaInventoryContainerDataAsset;

/**
 * Stores information related to the Container Fragment.
 */
USTRUCT(BlueprintType, DisplayName = "Container Memory")
struct NINJAINVENTORYGAMEPLAY_API FInventoryItemFragmentContainerMemory : public FInventoryFragmentMemory
{

	GENERATED_BODY()

	/** Container where this item is initially stored, used only as a default value. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Container Memory")
	TObjectPtr<const UNinjaInventoryContainerDataAsset> DefaultContainerData = nullptr;

	/** The position this item occupies in the container. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Container Memory")
	int32 Position = 0;

	/** Secondary containers for the stored item. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Container Memory")
	TArray<TObjectPtr<UNinjaInventoryContainer>> SecondaryContainers;

	/** Actual container instance where the item is currently stored. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Container Memory")
	FGuid PrimaryContainerId = FGuid();
	
	/** Stores the primary container before replication, so it can be notified. */
	UPROPERTY(NotReplicated)
	FGuid LastPrimaryContainerId = FGuid();

	/** Stores the position before replication, so it can be notified. */
	UPROPERTY(NotReplicated)
	int32 LastPosition = INDEX_NONE;
	
};

/**
 * Stores information related to the Durability Fragment.
 */
USTRUCT(BlueprintType, DisplayName = "Durability Memory")
struct NINJAINVENTORYGAMEPLAY_API FInventoryItemFragmentDurabilityMemory : public FInventoryFragmentMemory
{

	GENERATED_BODY()

	/** Current durability for the item. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Durability Memory")
	int32 CurrentDurability = 0;

	/**
	 * Stores the durability before replication, so it can be notified.
	 * This value must start at "-1" as an initial value of zero must be broadcast.
	 */
	UPROPERTY(NotReplicated)
	int32 LastDurability = -1;
	
};

/**
 * Stores information related to the Level Fragment.
 */
USTRUCT(BlueprintType, DisplayName = "Level Memory")
struct NINJAINVENTORYGAMEPLAY_API FInventoryItemFragmentLevelMemory : public FInventoryFragmentMemory
{

	GENERATED_BODY()

	/** Current level for the item. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Level Memory")
	int32 CurrentLevel = 0;

	/** Stores the level before replication, so it can be notified. */
	UPROPERTY(NotReplicated)
	int32 LastLevel = 0;
	
};

/**
 * Stores the current stack size for a given Inventory Item.
 */
USTRUCT(BlueprintType, DisplayName = "Stack Memory")
struct NINJAINVENTORYGAMEPLAY_API FInventoryItemFragmentStackMemory : public FInventoryFragmentMemory
{

	GENERATED_BODY()

	/** Current Stack Size for the item instance. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stack Memory", meta = (UIMin = 1, ClampMin = 1))
	int32 StackSize = 1;

	/** Stores the stack size before replication, so it can be notified. */
	UPROPERTY(NotReplicated)
	int32 LastStackSize = INDEX_NONE;

	/** Blocks the fragment from combining a stack that was created from a split operation. */
	UPROPERTY(NotReplicated)
	bool bIsFromSplitOperation = false;

};