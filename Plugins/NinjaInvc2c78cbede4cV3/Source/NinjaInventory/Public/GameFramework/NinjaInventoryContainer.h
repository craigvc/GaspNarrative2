// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "GameplayTagAssetInterface.h"
#include "GameplayTagContainer.h"
#include "UObject/Object.h"
#include "NinjaInventoryContainer.generated.h"

class UNinjaInventorySubsystem;
class UNinjaInventoryManagerComponent;
class UNinjaInventoryContainerDataAsset;

/**
 * Represents a specific container in an inventory.
 */
UCLASS(BlueprintType, Blueprintable)
class NINJAINVENTORY_API UNinjaInventoryContainer : public UObject, public IGameplayTagAssetInterface
{

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInventoryContainerEventSignature, UNinjaInventoryContainer*, Container);
	
	GENERATED_BODY()

public:

	friend UNinjaInventorySubsystem;
	friend UNinjaInventoryManagerComponent;
	
	/** Broadcasts when the container is added to an Inventory. */
	UPROPERTY(BlueprintAssignable)
	FInventoryContainerEventSignature OnContainerAdded;

	/** Broadcasts when the container is removed from an Inventory. */
	UPROPERTY(BlueprintAssignable)
	FInventoryContainerEventSignature OnContainerRemoved;
	
	UNinjaInventoryContainer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	
	// -- Begin Object implementation
	virtual bool IsSupportedForNetworking() const override { return true; }
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	// -- End Object implementation

	/**
	 * Provides the unique UID for this container.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Container")
	FORCEINLINE FGuid GetContainerId() const { return ContainerId; }

	/**
	 * Provides all Gameplay Tags assigned to this container.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Container")
	virtual void GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const override;
	
	/**
	 * Provides the data related to this container.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Container")
	const UNinjaInventoryContainerDataAsset* GetData() const;

	/**
	 * Provides the Inventory Manager that currently owns this container.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Container")
	UNinjaInventoryManagerComponent* GetInventoryManager() const;	
	
private:

	/** Identifier for this container. */
	UPROPERTY()
	FGuid ContainerId;

	/** Tags for this container. */
	UPROPERTY(Replicated)
	FGameplayTagContainer ContainerTags;
	
	/** Data that configures this container. */
	UPROPERTY(Replicated)
	TObjectPtr<const UNinjaInventoryContainerDataAsset> ContainerData;

	/**
	 * Inventory Manager that currently owns this container.
	 *
	 * Set by the inventory manager when the container is added and replicated.
	 * Therefore, we don't need to replicate the manager here.
	 */
	UPROPERTY()
	TObjectPtr<UNinjaInventoryManagerComponent> InventoryManager;
	
	/**
	 * Initializes the Container ID and its data.
	 * Containers can only be initialized once.
	 */
	void InitializeContainer(const UNinjaInventoryContainerDataAsset* NewContainerData);

	/**
	 * Sets the unique ID assigned to this container.
	 */
	void SetContainerId(const FGuid& NewContainerId);
	
	/**
	 * Sets the Inventory Manager assigned to this item.
	 */
	void SetInventoryManager(UNinjaInventoryManagerComponent* NewInventoryManager);	
	
};
