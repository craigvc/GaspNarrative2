// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "GameplayTagContainer.h"
#include "Engine/DataAsset.h"
#include "NinjaInventoryContainerDataAsset.generated.h"

#define INVENTORY_CONTAINER_DATA_ASSET_NAME		TEXT("InventoryContainerData")

class UNinjaInventoryContainer;
class UNinjaInventoryItemDataAsset;
class UNinjaInventoryItem;
class UNinjaInventoryManagerComponent;

/**
 * Configures a container used to store inventory items.
 */
UCLASS()
class NINJAINVENTORY_API UNinjaInventoryContainerDataAsset : public UPrimaryDataAsset
{
	
	GENERATED_BODY()

public:

	static const FPrimaryAssetType DataAssetType;
	
	UNinjaInventoryContainerDataAsset();

	// -- Begin Primary Data Asset implementation	
	virtual FPrimaryAssetId GetPrimaryAssetId() const override;
	// -- End Primary Data Asset implementation	
	
	/**
	 * Provides the name displayed to represent this container.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Container Data")
	FORCEINLINE FText GetDisplayName() const { return DisplayName; }

	/**
	 * Provides the Default Instance Class defined in this data asset.
	 * 
	 * @return
	 *		The default Item Instance class that should be used for this container.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Container Data")
	TSubclassOf<UNinjaInventoryContainer> GetDefaultContainerClass() const;
	
	/**
	 * Provides the priority set for this container.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Container Data")
	FORCEINLINE int32 GetPriority() const { return Priority; }
	
	/**
	 * Provides all gameplay Tags registered to this container.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Container Data")
	FORCEINLINE FGameplayTagContainer GetGameplayTags() const { return GameplayTags; }

	/**
	 * Provides the default state tag assigned to this container.
	 * This is only applicable for containers that are storing equipment.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Container Data")
	FGameplayTag GetDefaultStateTag() const { return DefaultStateTag; }

	/**
	 * Provides the default state tag assigned to this container, or an alternative if invalid.
	 * This is only applicable for containers that are storing equipment.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Container Data")
	FGameplayTag GetDefaultStateTagOrElse(const FGameplayTag& ElseStateTag) const;

	/**
	 * Informs if this is the default container for items.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Container Data")
	bool IsDefaultContainer() const;
	
	/**
	 * Counts the effective amount of slots assigned to a given owner.
	 * Takes into consideration the Gameplay Attribute set to this instance.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Container Data")
	int32 GetSlots(const UNinjaInventoryManagerComponent* Inventory) const;
	
	/**
	 * Evaluates if a given item is supported by this container, based on its query.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Container Data")
	bool SupportsItemData(const UNinjaInventoryItemDataAsset* ItemDefinition) const;

	/**
	 * Evaluates if a given item is supported by this container, based on its query.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Container Data")
	bool SupportsItem(const UNinjaInventoryItem* Item) const;

protected:

	/** Name used to identify this container. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Container Data")
	FText DisplayName;
	
	/** Tags that provide additional characteristics to this container. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Container Data", meta = (Categories = "Inventory.Container"))
	FGameplayTagContainer GameplayTags;

	/** Default class used to represent instances. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Container Data", NoClear)
	TSubclassOf<UNinjaInventoryContainer> ContainerClass;
	
	/** Default gameplay tag for an equipment state, if this container is an equipment container. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Container Data", meta = (Categories = "Equipment.State"))
	FGameplayTag DefaultStateTag;
	
	/**
	 * A set priority when this container can compete with others.
	 * Lower numbers mean a higher priority.
	 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Container Data")
	int32 Priority;
	
	/** Amount of slots available in this container. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Container Data")
	int32 Slots;

	/** A backing attribute that determines the amount of slots in this container. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Container Data")
	FGameplayAttribute SlotsAttribute;
	
	/** Determines what items are compatible with this container. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Container Data")
	FGameplayTagQuery ItemCompatibilityQuery;

#if WITH_EDITOR
public:

	// -- Begin Editor implementation
	virtual bool CanEditChange(const FProperty* InProperty) const override;
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
	// -- End Editor implementation
	
#endif
	
};
