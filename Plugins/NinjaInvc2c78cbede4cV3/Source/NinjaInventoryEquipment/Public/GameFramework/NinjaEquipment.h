// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "NinjaEquipmentTags.h"
#include "Data/NinjaEquipmentDataAsset.h"
#include "GameFramework/NinjaInventoryItem.h"
#include "Interfaces/UsableEquipmentInterface.h"
#include "UObject/Object.h"
#include "NinjaEquipment.generated.h"

struct FEquipmentEntry;
struct FEquipmentList;
struct FStoredEquipmentAnimLayer;
struct FStoredEquipmentMeshComponent;

class APawn;
class UAbilitySystemComponent;
class USkeletalMeshComponent;
class UStaticMeshComponent;
class UNinjaEquipmentDataAsset;
class UNinjaEquipmentManagerComponent;
class UNinjaInventoryContainer;
class UNinjaInventoryItem;
class UNinjaInventoryManagerComponent;
class IEquipableItemInterface;

/**
 * Manages a piece of equipment that is active and attached to a pawn.
 */
UCLASS(BlueprintType, Blueprintable)
class NINJAINVENTORYEQUIPMENT_API UNinjaEquipment : public UObject, public IUsableEquipmentInterface
{

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEquipmentEventSignature, UNinjaEquipment*, Equipment);
	
	GENERATED_BODY()
	
public:
	
	friend UNinjaEquipmentManagerComponent;

	/** Broadcasts when the equipment is added. */
	UPROPERTY(BlueprintAssignable)
	FEquipmentEventSignature OnEquipmentAdded;

	/** Broadcasts when the equipment's state changes. */
	UPROPERTY(BlueprintAssignable)
	FEquipmentEventSignature OnEquipmentStateChanged;

	/** Broadcasts when the equipment is removed. */
	UPROPERTY(BlueprintAssignable)
	FEquipmentEventSignature OnEquipmentRemoved;
	
	UNinjaEquipment();
	
	// -- Begin UObject implementation
	virtual UWorld* GetWorld() const override final;
	virtual bool IsSupportedForNetworking() const override { return true; }
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	virtual void BeginDestroy() override;
	// -- End UObject implementation

	// -- Begin Usable Equipment Interface
	virtual void UseEquipment_Implementation() override;
	// -- End Usable Equipment Interface
	
	/**
	 * Retrieves the Pawn that owns this equipment.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Equipment|Equipment Instance")
	APawn* GetPawn() const;

	/**
	 * Provides containers added by this equipment.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Equipment|Equipment Instance")
	TArray<UNinjaInventoryContainer*> GetStateContainers() const;

	/**
	 * Provides slots and components with meshes modified by this equipment.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Equipment|Equipment Instance")
	TArray<FStoredEquipmentMeshComponent> GetModifiedMeshComponents() const;

	/**
	 * Provides slots and components with meshes hidden by this equipment.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Equipment|Equipment Instance")
	TArray<FStoredEquipmentMeshComponent> GetUnusedMeshComponents() const;

	/**
	 * Provides all animation layers linked by this equipment.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Equipment|Equipment Instance")
	TArray<FStoredEquipmentAnimLayer> GetLinkedAnimationLayers() const;
	
	/**
	 * Provides actors spawned by this equipment.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Equipment|Equipment Instance")
	TArray<AActor*> GetSpawnedActors() const;

	/**
	 * Informs if this equipment is activated. 
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Equipment|Equipment Instance")
	bool IsActivated() const { return StateTag == Tag_Equipment_State_Activated; }

	/**
	 * Informs if this equipment is deactivated. 
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Equipment|Equipment Instance")
	bool IsDeactivated() const { return StateTag == Tag_Equipment_State_Deactivated; }

	/**
	 * Informs if the data asset for this equipment is loaded.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Equipment|Equipment Instance")
	bool IsDataLoaded() const { return bIsDataLoaded; }

	/**
	 * Informs if the equipment is waiting for the data asset to load.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Equipment|Equipment Instance")	
	bool IsWaitingForDataLoad() const { return bIsWaitingForDataLoad; }
	
	/**
	 * Provides the Actor that is marked as an Effect Causer.
	 *
	 * The Equipment Instance uses the "Equipment Effect Causer Interface" to determine
	 * the correct Spawned Actor to be used, and it will return the first viable candidate.
	 *
	 * If no actors are marked with the proper interface or pass the interface's check,
	 * then this function will return null.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Equipment|Equipment Instance")
	AActor* GetEffectCauserActor() const;
	
	/**
	 * Provides a consolidation of tags assigned to this equipment instance.
	 * Sum of Gameplay Tags from the backing item, the container and the equipment.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Equipment|Equipment Instance")
	FGameplayTagContainer GetEquipmentTags() const;

	/**
	 * Provides the Gameplay Tag representing this instance's state.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Equipment|Equipment Instance")
	FORCEINLINE FGameplayTag GetStateTag() const { return StateTag; }

	/**
	 * Provides the Gameplay Tag representing this instance's previous state.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Equipment|Equipment Instance")
	FORCEINLINE FGameplayTag GetPreviousStateTag() const { return PreviousStateTag; }	
	
	/**
	 * Provides the Gameplay Tag representing this instance's container/equipment slot.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Equipment|Equipment Instance")
	FGameplayTag GetSlotTag() const;

	/**
	 * Provides the container where this equipment is stored.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Equipment|Equipment Instance")
	UNinjaInventoryContainer* GetContainer() const;
	
	/**
	 * Provides this equipment's instigator as the backing Item.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Equipment|Equipment Instance")
	UNinjaInventoryItem* GetItem() const;

	/**
	 * Retrieves the equipable interface from the backing item. 
	 */
	IEquipableItemInterface* GetEquipableInterface() const;
	
	/**
	 * Provides this Equipment's Definition data, from the backing Item Instance. 
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Equipment|Equipment Instance")
	const UNinjaEquipmentDataAsset* GetData() const;

	/**
	 * Provides the Equipment Manager from the owning pawn.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Equipment|Equipment Instance")
	UNinjaEquipmentManagerComponent* GetEquipmentManager() const;

	/**
	 * Provides the Inventory Manager from the owning pawn.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Equipment|Equipment Instance")
	UNinjaInventoryManagerComponent* GetInventoryManager() const;
	
	/**
	 * Provides the Ability System Component assigned to this equipment's Manager.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Equipment|Equipment Instance")
	UAbilitySystemComponent* GetAbilitySystemComponent() const;

protected:

	/**
	 * Refreshes the equipment state, for the current data asset.
	 * Meant to be called by the Equipment Manager Component.
	 */
	virtual void RefreshEquipmentState();

	/**
	 * Fully reverts the current state.
	 * Meant to be called by the Equipment Manager Component.
	 */
	virtual void RevertCurrentState();
	
	/** Checks if the mesh is compatible with this equipment's owner. */
	bool IsCompatibleMesh(const FEquipmentBaseMesh& EquipmentMesh) const;

	/** Retrieves the interface fragment from a specific item. */
	static IEquipableItemInterface* GetEquipableInterfaceFromItem(const UNinjaInventoryItem* TargetItem);
	
	/** Retrieves the owner's root component used to attach actors. */
	UFUNCTION(BlueprintNativeEvent, Category = "Equipment Instance")
	USceneComponent* GetRootComponent() const;

	/**
	 * Adds all containers from the current State Configuration.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Equipment|Equipment Instance")
	virtual void AddContainers();

	/**
	 * Removes all containers from the current State Configuration.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Equipment|Equipment Instance")
	virtual void RemoveContainers();
	
	/**
	 * Assigns Static and Skeletal Meshes from the State Configuration.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Equipment|Equipment Instance")
	virtual void SetMeshes();
	
	/**
	 * Clears Static and Skeletal Meshes from the State Configuration.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Equipment|Equipment Instance")
	virtual void ClearMeshes();

	/**
	 * Removes additional meshes from the State Configuration.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Equipment|Equipment Instance")
	virtual void ClearUnusedMeshes();
	
	/**
	 * Links Animation Layers from the State Configuration.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Equipment|Equipment Instance")
	virtual void LinkAnimationLayers();

	/**
	 * Unlinks Animation Layers from the State Configuration.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Equipment|Equipment Instance")
	virtual void UnlinkAnimationLayers();
	
	/**
	 * Spawns actors from the State Configuration.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Equipment|Equipment Instance")
	virtual void SpawnOrReuseActors();

	/**
	 * Attaches an Equipment Actor following the provided Actor Setup.
	 *
	 * @param EquipmentActor		Actor to be attached.
	 * @param SelectorClass			Scene selector for the attachment.
	 * @param SocketName			Socket name for the attachment.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Equipment|Equipment Instance")
	virtual void AttachEquipmentActor(AActor* EquipmentActor, TSubclassOf<UNinjaEquipmentSceneComponentSelector> SelectorClass, FName SocketName) const;

	/**
	 * Stores an array of new state actors, synchronizing the internal array.
	 *
	 * @param StateActors
	 *		Actors that are present and valid in the current state.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Equipment|Equipment Instance")
	virtual void SynchronizeSavedActors(TArray<AActor*>& StateActors);
	
	/**
	 * Destroys all actors spawned by this equipment instance.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Equipment|Equipment Instance")
	void DestroyAllActors();

	/**
	 * Grants ability system elements from the State Configuration.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Equipment|Equipment Instance")
	virtual void AddToAbilitySystem();

	/**
	 * Revokes all elements from the current handle and resets it.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Equipment|Equipment Instance")	
	virtual void RemoveFromAbilitySystem();
	
	/**
	 * Event triggered when the item is set.
	 *
	 * You can use this hook to cache any information you need from the backing item,
	 * but keep in mind that the equipment's data asset might not be loaded yet, so
	 * make sure to check that, via the "IsDataLoaded" function.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Equipment Instance", meta = (DisplayName = "On Item Set"))
	void BP_OnItemSet();
	virtual void BP_OnItemSet_Implementation() { }
	
	/**
	 * Notifies a change in the state tag.
	 *
	 * @param NewStateTag	The State this equipment is currently in.
	 * @param OldStateTag	The State this equipment was before this change.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Equipment Instance", meta = (DisplayName = "On State Tag Changed"))
	void BP_OnStateTagChanged(FGameplayTag NewStateTag, FGameplayTag OldStateTag);
	virtual void BP_OnStateTagChanged_Implementation(FGameplayTag NewStateTag, FGameplayTag OldStateTag) { }
	
	/**
	 * Informs that a Skeletal Mesh has been set.
	 *
	 * This is useful if this equipment wants to customize the mesh, for scenarios like
	 * customizing materials further (i.e. team colors, skin colors, etc.)
	 *
	 * @param SlotTag			Slot where the mesh was assigned.
	 * @param MeshComponent		The Mesh Component that received the new mesh.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Equipment Instance", meta = (DisplayName = "On Skeletal Mesh Set"))
	void BP_OnSkeletalMeshSet(FGameplayTag SlotTag, USkeletalMeshComponent* MeshComponent);
	virtual void BP_OnSkeletalMeshSet_Implementation(FGameplayTag SlotTag, USkeletalMeshComponent* MeshComponent) { }
	
	/**
	 * Informs that a Static Mesh has been set.
	 *
	 * This is useful if this equipment wants to customize the mesh, for scenarios like
	 * customizing materials further (i.e. team colors, skin colors, etc.)
	 *
	 * @param SlotTag			Slot where the mesh was assigned.
	 * @param MeshComponent		The Mesh Component that received the new mesh.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Equipment Instance", meta = (DisplayName = "On Static Mesh Set"))
	void BP_OnStaticMeshSet(FGameplayTag SlotTag, UStaticMeshComponent* MeshComponent);
	virtual void BP_OnStaticMeshSet_Implementation(FGameplayTag SlotTag, UStaticMeshComponent* MeshComponent) { }

	/**
	 * Informs that a Skeletal Mesh has been removed.
	 *
	 * @param SlotTag			Slot where the mesh was originally assigned.
	 * @param MeshComponent		The Mesh Component that had its mesh removed.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Equipment Instance", meta = (DisplayName = "On Skeletal Mesh Removed"))
	void BP_OnSkeletalMeshRemoved(FGameplayTag SlotTag, USkeletalMeshComponent* MeshComponent);
	virtual void BP_OnSkeletalMeshRemoved_Implementation(FGameplayTag SlotTag, USkeletalMeshComponent* MeshComponent) { }
	
	/**
	 * Informs that a Static Mesh has been removed.
	 *
	 * @param SlotTag			Slot where the mesh was originally assigned.
	 * @param MeshComponent		The Mesh Component that had its mesh removed.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Equipment Instance", meta = (DisplayName = "On Static Mesh Removed"))
	void BP_OnStaticMeshRemoved(FGameplayTag SlotTag, UStaticMeshComponent* MeshComponent);
	virtual void BP_OnStaticMeshRemoved_Implementation(FGameplayTag SlotTag, UStaticMeshComponent* MeshComponent) { }
	
private:

	/** Informs if the data asset has been loaded. */
	bool bIsDataLoaded;

	/** Informs if the equipment is waiting for the data to load. */
	bool bIsWaitingForDataLoad;
	
	/** Current Equipment State. */
	FGameplayTag StateTag;

	/** Previous Equipment State. */
	FGameplayTag PreviousStateTag;

	/** Ability Handles assigned to this equipment */
	TSharedPtr<FEquipmentAbilityHandles> AbilityHandles;

	/** Item instance that backs this equipment. */
	UPROPERTY(ReplicatedUsing = OnRep_Item)
	TObjectPtr<UNinjaInventoryItem> Item;
	
	/** Identifier for this entry, same as the related item. */
	UPROPERTY()
	FGuid EquipmentId;

	/** Equipment Manager owning this instance. */
	UPROPERTY()
	TObjectPtr<UNinjaEquipmentManagerComponent> EquipmentManager;

	/** Item definition that backs this instance. */
	UPROPERTY()
	TObjectPtr<const UNinjaEquipmentDataAsset> EquipmentData;

	/**
	 * All containers added by this equipment.
	 * Replicated since the owning client should be able to query them.
	 */
	UPROPERTY(Replicated)
	TArray<TObjectPtr<UNinjaInventoryContainer>> StateContainers;

	/**
	 * All mesh components currently modified by this equipment.
	 * Not replicated since these are already known by each client.
	 */
	UPROPERTY()
	TArray<FStoredEquipmentMeshComponent> ModifiedMeshComponents;

	/**
	 * All mesh components deliberately cleared by the state.
	 * Not replicated since these are already known by each client.
	 */
	UPROPERTY()
	TArray<FStoredEquipmentMeshComponent> UnusedMeshComponents;

	/**
	 * All animation layers set by the state.
	 * Not replicated since these are already known by each client.
	 */	
	UPROPERTY()	
	TArray<FStoredEquipmentAnimLayer> AnimLayers;
	
	/**
	 * All actors spawned by this equipment.
	 * Replicated since the owning client should be able to query them.
	 */
	UPROPERTY(Replicated)
	TArray<TObjectPtr<AActor>> SpawnedActors;
	
	/**
	 * Sets the backing item for this equipment.
	 * Once set, it can't be changed.
	 */
	void SetItem(UNinjaInventoryItem* NewItem);

	/**
	 * Sets the equipment manager that owns this equipment. 
	 * Once set, it can't be changed.
	 */	
	void SetEquipmentManager(UNinjaEquipmentManagerComponent* NewEquipmentManager);
	
	/**
	 * Sets a new state tag and refresh the internal assets.
	 * Meant to be called by the Equipment Manager Component.
	 */
	void SetStateTag(FGameplayTag NewStateTag);

	/**
	 * Informs that this equipment's data asset has been loaded.
	 * Meant to be invoked by the Asset Manager. 
	 */
	void MarkEquipmentAsLoaded();
	
	/**
	 * Replicates the item, so we can start using its assets on clients.
	 * If there's anything you'd like to do when this happens, check BP_HandleItem.
	 */
	UFUNCTION()
	void OnRep_Item();
	
};
