// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "ActiveGameplayEffectHandle.h"
#include "GameplayTagAssetInterface.h"
#include "GameplayTagContainer.h"
#include "NinjaInventorySubsystem.h"
#include "Interfaces/ItemMagnitudeProviderInterface.h"
#include "Runtime/Launch/Resources/Version.h"
#include "Templates/SubclassOf.h"
#include "Types/FInventoryStoredFragmentMemory.h"
#include "UObject/Object.h"

#if ENGINE_MINOR_VERSION < 5
#include "InstancedStruct.h"
#else
#include "StructUtils/InstancedStruct.h"
#endif

#include "NinjaInventoryItem.generated.h"

struct FInventoryStoredFragmentMemoryList;
struct FInventoryDefaultItemMemory;

class UAbilitySystemComponent;
class UNinjaInventoryContainerDataAsset;
class UNinjaInventoryItemDataAsset;
class UNinjaInventoryItemFragment;
class UNinjaInventoryManagerComponent;

/**
 * Manages item data and it's fragments.
 *
 * Items can replicate their information and fragment memory, but a pre-requisite for that is that
 * something is replicating the Inventory Items as part of their own replication system.
 *
 * The most common scenario is the Inventory Manager, which will add the Item Instance's replication
 * to itself. Other situations where the Item Instance is not assigned to an Inventory Manager,
 * such as when they are represented by an Item Pickup Actor, must also account for that.
 */
UCLASS(BlueprintType, Blueprintable)
class NINJAINVENTORY_API UNinjaInventoryItem : public UObject, public IGameplayTagAssetInterface,
	public IItemMagnitudeValueInterface
{

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FItemEventSignature, UNinjaInventoryItem*, Item);
	
	GENERATED_BODY()

public:

	friend UNinjaInventoryManagerComponent;
	friend UNinjaInventorySubsystem;
	
	/** Broadcasts when the item is added to an Inventory. */
	UPROPERTY(BlueprintAssignable)
	FItemEventSignature OnItemAdded;

	/** Broadcasts when the item is removed from an Inventory. */
	UPROPERTY(BlueprintAssignable)
	FItemEventSignature OnItemRemoved;

	UNinjaInventoryItem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	
	// -- Begin Object implementation
	virtual bool IsSupportedForNetworking() const override { return true; }
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	// -- End Object implementation

	// -- Begin Item Magnitude Value implementation
	virtual float GetMagnitudeForDataTag_Implementation(const UNinjaInventoryItem* Item, const FGameplayTag& DataTag, float DefaultValue = 0.f) const override;
	virtual TMap<FGameplayTag, float> GetAllMagnitudeValues_Implementation(const UNinjaInventoryItem* Item) const override;
	// -- End Item Magnitude Value implementation
	
	/**
	 * Provides the unique UID for this instance.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Item")
	FORCEINLINE FGuid GetItemId() const { return ItemId; }

	/**
	 * Provides all Gameplay Tags assigned to this item.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Item")
	virtual void GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const override;

	UFUNCTION(BlueprintCallable, Category = "Ninja Inventory|Item")
	void AddGameplayTag(FGameplayTag Tag);

	UFUNCTION(BlueprintCallable, Category = "Ninja Inventory|Item")
	void RemoveGameplayTag(FGameplayTag Tag);
	
	/**
	 * Provides all Gameplay Tags representing supported operations.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Item")
	void GetSupportedOperations(FGameplayTagContainer& TagContainer) const;
	
	/**
	 * Provides the item data related to this instance.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Item")
	const UNinjaInventoryItemDataAsset* GetData() const;

	/**
	 * Provides the Inventory Manager that currently owns this item.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Item")
	UNinjaInventoryManagerComponent* GetInventoryManager() const;

	/**
	 * Provides the Ability System Component assigned to this item's owner.
	 * Only available if this item is assigned to an Inventory.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Item")
	UAbilitySystemComponent* GetAbilitySystem() const;
	
	/**
	 * Checks if this item has the same definition as the provided instance.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Item")
	bool HasSameData(const UNinjaInventoryItem* OtherItem) const;

	/**
	 * Ensures that a fragment instance is related to this item's definition.
	 * Some fragments might want to check this before executing certain operations.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Item")
	bool HasFragment(const UNinjaInventoryItemFragment* Fragment) const;
	
	/**
	 * Checks if the owner of this Item has network authority.
	 * Only possible if the item is currently assigned to an Inventory Manager.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Item")
	bool OwnerHasAuthority() const;

	/**
	 * Informs if fragments for this item were initialized.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Item")
	bool HasInitializedFragments() const { return bHasInitializedFragments; }
	
	/**
	 * Informs if fragments for this item were applied.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Item")
	bool HasAppliedFragments() const { return bHasAppliedFragments; }

	/**
	 * Retrieves a fragment by its class.
	 * 
	 * @param FragmentClass			Fragment type retrieved from the item definition.
	 * @return						The Fragment instance related to the provided class.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Inventory|Item", meta = (DeterminesOutputType = FragmentClass))
	UNinjaInventoryItemFragment* FindFragmentByClass(TSubclassOf<UNinjaInventoryItemFragment> FragmentClass) const;

	/**
	 * Retrieves a fragment by an interface.
	 * 
	 * @param FragmentInterface		Interface implemented by the fragment.
	 * @return						The Fragment instance implementing the provided interface.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Inventory|Item")
	UNinjaInventoryItemFragment* FindFragmentByInterface(TSubclassOf<UInterface> FragmentInterface) const;

	/**
	 * Retrieves all fragments implementing an interface.
	 *
	 * @param FragmentInterface		Interface implemented by the fragment.
	 * @return						All fragments implementing the interface.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Inventory|Item")
	TArray<UNinjaInventoryItemFragment*> FindFragmentsByInterface(TSubclassOf<UInterface> FragmentInterface) const;
	
	/**
	 * Retrieves a fragment by a given class, defined by the provided template value.
	 */
	template <typename ResultClass = UNinjaInventoryItemFragment>
	ResultClass* FindFragment() const
	{
		return Cast<ResultClass>(FindFragmentByClass(ResultClass::StaticClass()));
	}

	/**
	 * Initializes all fragments assigned to this instance.
	 * Fragments are initialized only once, when the item is instantiated.
	 */
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "Ninja Inventory|Item")
	void InitializeFragments();
	
	/**
	 * Applies all fragments assigned to this instance.
	 * Fragments are applied whenever an item is assigned to an inventory.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Inventory|Item")
	void ApplyFragments();
	
	/**
	 * Reverts all fragments assigned to this instance.
	 * Fragments are reverted whenever an item is removed from an inventory.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Inventory|Item")
	void RevertFragments();
	
	/**
	 * Initializes all fragment memories provided in the array.
	 *
	 * @param Memories			Default memories for fragments. 
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Inventory|Item")
	void InitializeFragmentMemories(const TArray<FInventoryDefaultItemMemory>& Memories);
	
	/**
	 * Initializes the memory for a certain fragment type.
	 *
	 * Nothing happens if this function is called for a fragment that already has
	 * a memory that has been initialized.
	 * 
	 * @param FragmentClass		Fragment class mapped to the memory. 
	 * @param Memory			Initial memory for the fragment.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Inventory|Item")
	void InitializeFragmentMemory(const TSubclassOf<UNinjaInventoryItemFragment>& FragmentClass, const TInstancedStruct<FInventoryFragmentMemory>& Memory);

	/**
	 * Checks if a fragment already has an initialized memory.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Item")
	bool HasFragmentMemory(const TSubclassOf<UNinjaInventoryItemFragment>& FragmentClass) const;
	
	/**
	 * Retrieves a memory from a fragment.
	 *
	 * @param FragmentClass		Fragment class used to search for the memory.
	 * @param OutMemory			Memory found for the Fragment.
	 * @return					True if the memory was found, false otherwise.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Item")
	bool GetFragmentMemory(const TSubclassOf<UNinjaInventoryItemFragment>& FragmentClass, TInstancedStruct<FInventoryFragmentMemory>& OutMemory) const;

	/**
	 * Retrieves all memories from all fragments.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Item")
	TArray<FInventoryDefaultItemMemory> GetFragmentMemories() const;

	/**
	 * Retrieves all memories from fragments that support serialization.
	 * This means fragments implementing the `InventorySerializableFragmentInterface`.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Item")
	TArray<FInventoryDefaultItemMemory> GetSerializableFragmentMemories() const;
	
	/**
	 * Stores a fragment's memory in this item instance.
	 *
	 * @param Fragment			Fragment that owns the memory.
	 * @param Memory			Memory that will be created or updated.
	 * @return					Index of the memory that was saved.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Inventory|Item")
	int32 SaveFragmentMemory(UNinjaInventoryItemFragment* Fragment, const TInstancedStruct<FInventoryFragmentMemory>& Memory);

	/**
	 * Stores all applicable fragment memories from a default entry. 
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Inventory|Item")
	void SaveDefaultFragmentMemories(const TArray<FInventoryDefaultItemMemory>& DefaultItemMemories);
	
	/**
	 * Removes a fragment's memory stored in this item instance, if present.
	 *
	 * Every time a fragment is reverted, the memory is automatically removed, but you can
	 * also decide when to call this function, if you need that to happen at a different time.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Inventory|Item")
	void RemoveFragmentMemory(const TSubclassOf<UNinjaInventoryItemFragment>& FragmentClass);

	/**
	 * Checks if a given Item Fragment has an Active Effect Handle.
	 */
	UFUNCTION(BlueprintPure, BlueprintAuthorityOnly, Category = "Ninja Inventory|Item")
	bool HasActiveEffectHandle(const UNinjaInventoryItemFragment* Fragment) const;
	
	/**
	 * Saves a Gameplay Effect Handle from an Inventory Fragment.
	 *
	 * Handles are not saved in the memory structure as they are never replicated. Saving them
	 * in the memory structure is quite wasteful, and leads to unnecessarily complex memories.
	 *
	 * Each fragment can only have one active handle stored. Multiple effects can be added by
	 * the same Gameplay Effect, so that feature should be used.
	 */
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "Ninja Inventory|Item")
	void SaveActiveEffectHandle(UNinjaInventoryItemFragment* Fragment, const FActiveGameplayEffectHandle& Handle);

	/**
	 * Provides the Active Effect Handle for the fragment.
	 */
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "Ninja Inventory|Item")
	bool GetActiveEffectHandle(const UNinjaInventoryItemFragment* Fragment, FActiveGameplayEffectHandle& OutHandle) const;
	
	/**
	 * Invalidates the Effect Handle and removes the entry.
	 */
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "Ninja Inventory|Item")
	void InvalidateEffectHandle(const UNinjaInventoryItemFragment* Fragment);
	
private:

	/**
	 * Informs if this item was fully initialized.
	 * Initialization code only happens in the server, so we need to replicate this.
	 */
	UPROPERTY(Replicated)
	uint8 bHasInitializedFragments:1;

	/** Informs if this item has applied all fragments. */
	uint8 bHasAppliedFragments:1;

	/** Identifier for this item. */
	UPROPERTY(Replicated)
	FGuid ItemId;

	/** Tags for this item. */
	UPROPERTY(Replicated)
	FGameplayTagContainer ItemTags;

	/** All fragment memories assigned to this item. */
	UPROPERTY(Replicated)
	FInventoryStoredFragmentMemoryList FragmentMemoryList;
	
	/** Item definition backing this item. */
	UPROPERTY(Replicated)
	TObjectPtr<const UNinjaInventoryItemDataAsset> ItemData;

	/**
	 * Inventory Manager that currently owns this item.
	 *
	 * Set by the inventory manager when the item is added and replicated.
	 * Therefore, we don't need to replicate the manager here.
	 */
	UPROPERTY(Replicated)
	TObjectPtr<UNinjaInventoryManagerComponent> InventoryManager;

	/**
	 * Map used to store Gameplay Effect Handles for each fragment.
	 *
	 * Since these are never replicated, it is not worthy to add handles to memories
	 * and sometimes, fragments only need to store the handle, which makes the memory
	 * structure even more wasteful.
	 */
	TMap<TObjectPtr<UNinjaInventoryItemFragment>, TSharedPtr<FActiveGameplayEffectHandle>> ActiveEffectHandles;

	/**
	 * Initializes the Item, with an internal ID and the Item Definition.
	 * An Item can only have one valid initialization.
	 */
	void InitializeItem(const UNinjaInventoryItemDataAsset* NewItemDefinition);

	/**
	 * Sets the unique ID assigned to this item.
	 */
	void SetItemId(const FGuid& NewItemId);	
	
	/**
	 * Sets the Inventory Manager assigned to this item.
	 */
	void SetInventoryManager(UNinjaInventoryManagerComponent* NewInventoryManager);
	
};
