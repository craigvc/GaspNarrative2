// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "Types/FInventoryDefaultItemMemory.h"
#include "FInventorySerialization.generated.h"

class UNinjaInventoryContainer;
class UNinjaInventoryItem;

/**
 * Represents a serialized container that can be used when saving/loading the game.
 * 
 * These containers are usually created from the Default Setup, since item-related
 * containers are re-initialized when the owning item is deserialized into the manager.
 */
USTRUCT(BlueprintType)
struct NINJAINVENTORY_API FInventoryContainerRecord
{
	
	GENERATED_BODY()

	/** The unique ID that was assigned to this container. */
	UPROPERTY(BlueprintReadWrite, Category = "Container Record", SaveGame)
	FGuid ContainerId;

	/** The unique ID of the item that owns this container. */
	UPROPERTY(BlueprintReadWrite, Category = "Container Record", SaveGame)
	FString OwningItemId;
	
	/** Name assigned to the Container instance. */
	UPROPERTY(BlueprintReadWrite, Category = "Container Record", SaveGame)
	FName InstanceName;
	
	/** Asset Path to the Container Data Asset. */
	UPROPERTY(BlueprintReadWrite, Category = "Container Record", SaveGame)
	FString DataAssetPath;
	
};

/**
 * Represents a serialized item that can be used when saving/loading the game.
 */
USTRUCT(BlueprintType)
struct NINJAINVENTORY_API FInventoryItemRecord
{
	
	GENERATED_BODY()

	/** The unique ID that was assigned to this item. */
	UPROPERTY(BlueprintReadWrite, Category = "Item Record", SaveGame)
	FGuid ItemId;

	/** Name assigned to the Item instance. */
	UPROPERTY(BlueprintReadWrite, Category = "Item Record", SaveGame)
	FName InstanceName;
	
	/** Asset Path to the Item Data Asset. */
	UPROPERTY(BlueprintReadWrite, Category = "Item Record", SaveGame)
	FString DataAssetPath;

	/** Memories assigned to the item. */
	UPROPERTY(BlueprintReadWrite, Category = "Item Record", SaveGame)
	TArray<FInventoryDefaultItemMemory> Memories;
	
};

/**
 * Represents a serialized manager that can be used when saving/loading the game.
 */
USTRUCT(BlueprintType)
struct NINJAINVENTORY_API FInventoryManagerRecord
{
	
	GENERATED_BODY()

	/** Asset Path to the Layout Data Asset. */
	UPROPERTY(BlueprintReadWrite, Category = "Manager Record", SaveGame)
	FString DataAssetPath;

	/** All containers assigned to the inventory. */
	UPROPERTY(BlueprintReadWrite, Category = "Manager Record", SaveGame)
	TArray<FInventoryContainerRecord> ContainerRecords;

	/** All items assigned to the inventory. */
	UPROPERTY(BlueprintReadWrite, Category = "Manager Record", SaveGame)
	TArray<FInventoryItemRecord> ItemRecords;

	UPROPERTY()
	TArray<uint8> Data;
	
};