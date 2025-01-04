// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "Interfaces/Aspects/OperableItemInterface.h"
#include "Types/FInventoryDefaultItemMemory.h"
#include "FItemFragmentOperationPayload.generated.h"

class AActor;
class UNinjaInventoryContainer;
class UNinjaInventoryItem;
class UNinjaInventoryItemDataAsset;

/**
 * Details about consume operations.
 */
USTRUCT(BlueprintType, DisplayName = "Consume Payload")
struct NINJAINVENTORYGAMEPLAY_API FInventoryFragmentConsumeOperationPayload : public FInventoryFragmentPayload
{
	
	GENERATED_BODY()

	bool IsConsumeOperation() const;

};

/**
 * Details about storage operations.
 */
USTRUCT(BlueprintType, DisplayName = "Container Payload")
struct NINJAINVENTORYGAMEPLAY_API FInventoryFragmentStorageOperationPayload : public FInventoryFragmentPayload
{
	
	GENERATED_BODY()

	/** Another item to swap positions with. Prioritized over the container/position data. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fragment Operation Payload")
	TObjectPtr<UNinjaInventoryItem> ItemToSwap = nullptr;
	
	/** New Container to store an item. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fragment Operation Payload")
	TObjectPtr<UNinjaInventoryContainer> Container = nullptr;

	/** New position to store an item, in the current or new container. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fragment Operation Payload")
	int32 Position = INDEX_NONE;

	bool IsMoveOperation() const;
	bool IsSwapOperation() const;
	
};

/**
 * Details about durability operations.
 */
USTRUCT(BlueprintType, DisplayName = "Durability Payload")
struct NINJAINVENTORYGAMEPLAY_API FInventoryFragmentDurabilityOperationPayload : public FInventoryFragmentPayload
{
	
	GENERATED_BODY()

	/** How much wear will be applied to the item's durability. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fragment Operation Payload")
	int32 WearAmount = 10;
	
	bool IsRepairOperation() const;
	bool IsWearOperation() const;
	
};

/**
 * Details about equipment operations.
 */
USTRUCT(BlueprintType, DisplayName = "Equipment Payload")
struct NINJAINVENTORYGAMEPLAY_API FInventoryFragmentEquipmentOperationPayload : public FInventoryFragmentPayload
{
	
	GENERATED_BODY()

	bool IsActivateOperation() const;
	bool IsDeactivateOperation() const;

};

/**
 * Details about level operations.
 */
USTRUCT(BlueprintType, DisplayName = "Level Payload")
struct NINJAINVENTORYGAMEPLAY_API FInventoryFragmentLevelOperationPayload : public FInventoryFragmentPayload
{
	
	GENERATED_BODY()

	/** Value to be used as the actual level or increment. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fragment Operation Payload")
	int32 Value = 0;

	/** Informs how the value should be used. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fragment Operation Payload")
	bool bIsIncremental = false;
	
	bool IsUpgradeOperation() const;
	
};

/**
 * Details about pickup operations.
 */
USTRUCT(BlueprintType, DisplayName = "Pickup Payload")
struct NINJAINVENTORYGAMEPLAY_API FInventoryFragmentPickupOperationPayload : public FInventoryFragmentPayload
{
	
	GENERATED_BODY()

	/** Source generating this payload. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fragment Operation Payload")
	TObjectPtr<AActor> Source;
	
	/** Item data to drop. Only used if the original item is not provided. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fragment Operation Payload")
	TObjectPtr<UNinjaInventoryItemDataAsset> ItemData = nullptr;

	/** Memories used when granting the item. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fragment Operation Payload")
	TArray<FInventoryDefaultItemMemory> Memories;
	
	/**
	 * Location in the world where the item will be dropped.
	 * 
	 * This could be the Mouse Location (from UI Drag/Drop), a location obtained from an
	 * Environment Query, or any other means. Regardless, the fragment will consider the
	 * location valid and use it.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fragment Operation Payload")
	FVector Location = FVector::ZeroVector;

	/**
	 * Determines if this drop is only meant for the local player or all players.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fragment Operation Payload")
	bool bIsLocalOnly = true;

	bool IsDropOperation() const;
	
};

/**
 * Details about stack operations.
 */
USTRUCT(BlueprintType, DisplayName = "Stack Payload")
struct NINJAINVENTORYGAMEPLAY_API FInventoryFragmentStackOperationPayload : public FInventoryFragmentPayload
{
	
	GENERATED_BODY()

	/** Another item to combine stacks with. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fragment Operation Payload")
	TObjectPtr<UNinjaInventoryItem> ItemToCombine = nullptr;
	
	/** A stack size for split. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fragment Operation Payload")
	int32 SplitSize = INDEX_NONE;

	bool IsCombineOperation() const;
	bool IsSplitOperation() const;
	
};