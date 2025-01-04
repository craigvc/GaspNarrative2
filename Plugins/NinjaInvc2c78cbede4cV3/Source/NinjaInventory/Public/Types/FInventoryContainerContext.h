// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "FInventoryContainerContext.generated.h"

class UNinjaInventoryContainer;
class UNinjaInventoryContainerDataAsset;
class UNinjaInventoryItem;

/**
 * A context used to add a Container to the Inventory.
 */
USTRUCT(BlueprintType)
struct NINJAINVENTORY_API FInventoryContainerContext
{
	
	GENERATED_BODY()

	/** Checks if this context has valid data. */
	bool IsValid() const;

	/** Checks if this is a failed context. */
	bool IsFailed() const;

	/** Evaluates the internal state to indicate a success. */
	bool IsSuccessful() const;

	/** Checks if this context has valid data being loaded from a game save. */
	bool IsValidForLoadOperation() const;
	
	/** Checks if this context has a container or the data should be used instead. */
	bool HasContainer() const;

	/** Marks this context to be used for a load operation. */
	void MarkLoadOperation();

	/** Marks this context as failed, due to validation. */
	void MarkAsFailed();
	
	/** 
	 * Provides the container ID that can be reused.
	 * Usually valid during the load process, but invalid otherwise. 
	 */
	FGuid GetContainerId() const;

	/** Sets a new container ID that can be reused. */
	void SetContainerId(FGuid NewContainerId);
	
	/** Provides the container data in this context. */
	const UNinjaInventoryContainerDataAsset* GetContainerData() const;
	
	/** Sets the container data for this context. */
	void SetContainerData(const UNinjaInventoryContainerDataAsset* NewContainerData);

	/** Provides the container in this context. */
	UNinjaInventoryContainer* GetContainer() const;
		
	/** Sets the item for this context. This overrides any current Container Data. */
	void SetContainer(UNinjaInventoryContainer* NewContainer);

	/** Provides the item that owns/grants this container. */
	UNinjaInventoryItem* GetOwningItem() const;
		
	/** Sets the owning item for this context. */
	void SetOwningItem(UNinjaInventoryItem* NewOwningItem);
	
	/** Resets this context to invalidate it. */
	void Reset();
	
	/** Creates an empty context, with invalid data. */
	static FInventoryContainerContext EmptyContext();

protected:

	/** Informs if this context has failed to execute, due to validations. */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Container Context")
	bool bIsFailed = false;
	
	/** Informs if this context is used for a new entry or load operation. */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Container Context")
	bool bIsLoadOperation = false;
	
	/** Pre-defined container ID that can be reused. */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Container Context")
	FGuid ContainerId = FGuid();
	
	/** Container data that will generate an instance. */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Container Context")
	TObjectPtr<const UNinjaInventoryContainerDataAsset> ContainerData;

	/** The actual container to be added. Overrides the definition. */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Container Context")
	TObjectPtr<UNinjaInventoryContainer> Container;
	
	/** Item that owns this container. */
	UPROPERTY(BlueprintReadOnly, Category = "Container Context")
	TObjectPtr<UNinjaInventoryItem> OwningItem;

};