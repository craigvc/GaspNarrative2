// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "Components/NinjaInventoryCoreComponent.h"
#include "Data/NinjaEquipmentSlotDataAsset.h"
#include "Engine/StreamableManager.h"
#include "Misc/Optional.h"
#include "Runtime/Launch/Resources/Version.h"
#include "Types/FEquipment.h"
#include "Types/FEquipmentStateConfiguration.h"
#include "NinjaEquipmentManagerComponent.generated.h"

class UNinjaInventoryAction_WaitForInventorySystem;
class UAnimMontage;
class UMeshComponent;
class USkeletalMesh;
class USkeletalMeshComponent;
class UStaticMesh;
class UStaticMeshComponent;
class UStreamableRenderAsset;
class UNinjaEquipmentDataAsset;
class UNinjaEquipment;
class UNinjaEquipmentSlotDataAsset;
class UNinjaInventoryContainer;
class UNinjaInventoryContainerDataAsset;
class UNinjaInventoryItem;
class UNinjaInventoryManagerComponent;

/**
 * Manages equipment pieces representing items from a backing Inventory Manager.
 */
UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class NINJAINVENTORYEQUIPMENT_API UNinjaEquipmentManagerComponent : public UNinjaInventoryCoreComponent
{

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FManagedEquipmentEvent, UNinjaEquipment*, Equipment);
	
	GENERATED_BODY()

public:

	/** Notifies equipment that has been added. */
	UPROPERTY(BlueprintAssignable)
	FManagedEquipmentEvent OnEquipmentAdded;
	
	/** Notifies a change in an equipment state. */
	UPROPERTY(BlueprintAssignable)
	FManagedEquipmentEvent OnEquipmentStateChanged;

	/** Notifies equipment that has been removed. */
	UPROPERTY(BlueprintAssignable)
	FManagedEquipmentEvent OnEquipmentRemoved;
	
	UNinjaEquipmentManagerComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	
	// -- Begin Actor Component implementation
	virtual void InitializeComponent() override;
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	virtual void ReadyForReplication() override;
	virtual bool ReplicateSubobjects(UActorChannel* Channel, FOutBunch* Bunch, FReplicationFlags* RepFlags) override;
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	// -- End Actor Component implementation

	/**
	 * Provides the Inventory Manager Component assigned to the owner.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Equipment|Equipment Manager")
	UNinjaInventoryManagerComponent* GetInventoryManager() const;

	/**
	 * Ensures that a piece of equipment is assigned to this Equipment Manager.
	 * 
	 * @param Equipment				Equipment to be evaluated. Must be provided.
	 * @return						True if the equipment instance is owned by this Equipment Manager.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Equipment|Equipment Manager")
	bool HasEquipment(const UNinjaEquipment* Equipment) const;

	/**
	 * Checks if an item is waiting for inventory, so it can have the equipment initialized.
	 *
	 * @param Item					Item waiting to be initialized.
	 * @return						True if the item has been placed in the initialization queue.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Equipment|Equipment Manager")
	bool HasItemInInventoryQueue(const UNinjaInventoryItem* Item) const;

	/**
	 * Provides all equipment containers in the Inventory Manager.
	 *
	 * This includes all cosmetic equipment containers as well. The query used to search for
	 * containers is defined in the <code>AllEquipmentContainersQuery</code> property.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Equipment|Equipment Manager", meta = (ReturnDisplayName = "Equipment Containers"))
	TArray<UNinjaInventoryContainer*> GetAllEquipmentContainers() const;

	/**
	 * Provides relevant equipment containers in the Inventory Manager.
	 *
	 * This excludes all cosmetic equipment containers as well. The query used to search for
	 * containers is defined in the <code>RelevantEquipmentContainersQuery</code> property.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Equipment|Equipment Manager", meta = (ReturnDisplayName = "Equipment Containers"))
	TArray<UNinjaInventoryContainer*> GetRelevantEquipmentContainers() const;
	
	/**
	 * Provides the piece of equipment representing an item.
	 *
	 * @param Item					Item Instance represented by an Equipment Instance.
	 * @return						Equipment representing the item, if any.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Equipment|Equipment Manager", meta = (ReturnDisplayName = "Equipment"))
	UNinjaEquipment* GetEquipmentByItem(const UNinjaInventoryItem* Item) const;
	
	/**
	 * Provides the first piece of equipment for the given query.
	 *
	 * @param Query					Gameplay Query used to search for equipment.
	 * @return						Piece of equipment found for the provided Query. Always null for invalid queries.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Equipment|Equipment Manager", meta = (ReturnDisplayName = "Equipment"))
	UNinjaEquipment* GetFirstEquipmentByQuery(const FGameplayTagQuery& Query) const;

	/**
	 * Provides a piece of equipment assigned to a given slot.
	 *
	 * If the slot supports multiple equipment pieces simultaneously, and it currently contains
	 * multiple instances, then only the first one is returned.
	 * 
	 * @param Slot					Container representing the desired slot. Must be provided.
	 * @return						Equipment piece assigned to the slot. May be null.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Equipment|Equipment Manager", meta = (ReturnDisplayName = "Equipment"))
	UNinjaEquipment* GetEquipmentBySlot(const UNinjaInventoryContainer* Slot) const;

	/**
	 * Provides the equipment for a given query.
	 * 
	 * @param Query					Query used to search for equipment.
	 * @return						All equipment matching the query. Empty for invalid queries.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Equipment|Equipment Manager", meta = (ReturnDisplayName = "Equipment"))
	TArray<UNinjaEquipment*> GetEquipmentByQuery(const FGameplayTagQuery& Query) const;
	
	/**
	 * Creates an equipment instance for a given item.
	 *
	 * @param Item
	 *		Item backing the new equipment. Must have an equipment fragment.
	 */
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "Ninja Inventory|Equipment|Equipment Manager")
	void InitializeEquipmentForItem(UNinjaInventoryItem* Item);

	/**
	 * Tries to determine the best equipment state, based on all possible sources.
	 *
	 * Ultimately, it will fall back to the default state configured in the Equipment Manager.
	 * 
	 * @param Equipment				Equipment to be evaluated.
	 * @param PreferredState		An optional preferredState that takes priority.
	 * @return						The Gameplay Tag representing the equipment state.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Inventory|Equipment|Equipment Manager", meta = (ReturnDisplayName = "Equipment State"))
	virtual FGameplayTag GetBestEquipmentState(UNinjaEquipment* Equipment, FGameplayTag PreferredState = FGameplayTag());
	
	/**
	 * Determines an equipment state based on its container.
	 *
	 * @param Equipment				Equipment to be evaluated.
	 * @return						The Gameplay Tag representing the equipment state.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Inventory|Equipment|Equipment Manager", meta = (ReturnDisplayName = "Equipment State"))
	virtual FGameplayTag GetEquipmentStateFromContainer(UNinjaEquipment* Equipment);

	/**
	 * Adds a piece of equipment to this manager, in the provided initial state.
	 * 
	 * @param Equipment				Piece of equipment to be added to this manager.
	 * @param InitialStateTag		Initial state for the equipment.
	 */
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "Ninja Inventory|Equipment|Equipment Manager")
	void AddEquipment(UNinjaEquipment* Equipment, UPARAM(meta = (Categories = "Equipment.State")) FGameplayTag& InitialStateTag);
	
	/**
	 * Sets a new state for given equipment.
	 * 
	 * @param Equipment				Piece of equipment to change the state.
	 * @param NewStateTag			New State for the Equipment Instance.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Inventory|Equipment|Equipment Manager")
	void ChangeEquipmentState(UNinjaEquipment* Equipment, UPARAM(meta = (Categories = "Equipment.State")) FGameplayTag NewStateTag);

	/**
	 * Removes an equipment piece related to an Inventory Item.
	 *
	 * @param Item					Inventory Item represented by the equipment.
	 */
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "Ninja Inventory|Equipment|Equipment Manager")
	void RemoveEquipment(const UNinjaInventoryItem* Item);

	/**
	 * Grants an equipment piece's Gameplay Data to the owner's Ability Component.
	 *
	 * @param Source				Piece of equipment providing the Ability Data and used as source.
	 * @param OutHandles			Ability Handles generated by this operation.
	 */
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "Ninja Inventory|Equipment|Equipment Manager")
	void GrantToAbilitySystem(UNinjaEquipment* Source, FEquipmentAbilityHandles& OutHandles) const;

	/**
	 * Removes all handles from an Ability System Component.
	 *
	 * @param Handles
	 *		Handles for all gameplay elements that were granted and are now being removed.
	 *		This is most likely stored by an Equipment Instance that granted elements before.
	 */
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "Ninja Inventory|Equipment|Equipment Manager")
	void RevokeFromAbilitySystem(FEquipmentAbilityHandles& Handles) const;

	/**
	 * Central place to create Actors related to Equipment Instances.
	 * 
	 * @param EquipmentActorClass	The class for the new equipment actor.
	 * @param Equipment				Piece of equipment owning the actor.
	 * @return						The Equipment Actor instance.
	 */
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "Ninja Inventory|Equipment|Equipment Manager", meta = (ReturnDisplayName = "Equipment Actor"))
	virtual AActor* CreateEquipmentActor(TSubclassOf<AActor> EquipmentActorClass, UNinjaEquipment* Equipment);

	/**
	 * Calculates the average gear level for this Equipment Manager Component
	 *
	 * @param AbsoluteGearLevel		The absolute gear level, with all equipment.
	 * @return						The average gear level.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Inventory|Equipment|Equipment Manager", meta = (ReturnDisplayName = "Average Gear Level"))
	float GetAverageGearLevel(float AbsoluteGearLevel) const;
	
	/**
	 * Checks if this Equipment Manager has a Component for the Gameplay Tag.
	 *
	 * @param SlotTag				Gameplay Tag identifying the desired Equipment Slot.
	 * @return						True if the owner has a component with the provided tag.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Equipment|Equipment Manager")
	bool HasEquipmentSlot(const FGameplayTag& SlotTag) const;

	/**
	 * Provides the socket name mapped to an equipment slot.
	 *
	 * These "virtual slots" are mapped in this Component's "SlotSocketMapping", property
	 * and are mainly used by Equipment Actors that are attached to the mesh and
	 * not necessarily to any Slot Component.
	 *
	 * @param SlotTag				Gameplay Tag identifying the desired Equipment Slot.
	 * return						Name of the attachment socket. Can be NONE.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Equipment|Equipment Manager")
	FName GetSocketNameForEquipmentSlot(const FGameplayTag& SlotTag) const;

	/**
	 * Provides the Slot Tag related to an Attachment Socket.
	 *
	 * This is an inverse lookup for the "SlotSocketMapping". Internally, it uses an
	 * inverted map, so the operation is efficient O(1).
	 *
	 * Since multiple Gameplay Tags can be related to the same socket, the result is
	 * provided as a Gameplay Tag Container.
	 *
	 * @param AttachSocket			Socket related to a Slot Tag.
	 * return						Gameplay Tag Container related to the socket.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Equipment|Equipment Manager")
	FGameplayTagContainer GetSlotTagForAttachmentSocket(const FName& AttachSocket) const;

	/**
	 * Provides all Equipment Slots currently hidden.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Equipment|Equipment Manager")
	FGameplayTagContainer GetHiddenEquipmentSlots() const;
	
	/**
	 * Hides equipment slots identified by the Gameplay Tags.
	 *
	 * Useful to temporarily hide equipped items, while another action is happening, such
	 * as using a consumable, dialogue where the helmet should be hidden, and so on.
	 *
	 * @param SlotTags				All tags for slots that must be hidden.
	 * @return						Amount of components that were hidden.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Inventory|Equipment|Equipment Manager")
	virtual int32 HideEquipmentSlots(UPARAM(meta = (Categories = "Equipment.Slot")) const FGameplayTagContainer& SlotTags);

	/**
	 * Shows equipment slots identified by the Gameplay Tags.
	 *
	 * Meant to be invoked to revert a "Hide Equipment Slot" operation.
	 * 
	 * @param SlotTags				All tags for slots that must be shown.
	 * @return						Amount of components that were shown.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Inventory|Equipment|Equipment Manager")
	virtual int32 ShowEquipmentSlots(UPARAM(meta = (Categories = "Equipment.Slot")) const FGameplayTagContainer& SlotTags);
	
	/**
	 * Sets a static mesh asset to a specific slot represented by a tag.
	 *
	 * @param SlotTag				Component tag used to find the Static Mesh Component
	 * @param MeshPtr				Soft pointer to the mesh. Must be valid/loaded.
	 * @param SocketName			Optional socket name to attach the component.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Inventory|Equipment|Equipment Manager")
	virtual UStaticMeshComponent* SetStaticMeshAsset(const FGameplayTag& SlotTag, const TSoftObjectPtr<UStaticMesh>& MeshPtr, FName SocketName = NAME_None);
	
	/**
	 * Sets a skeletal mesh asset to a specific slot represented by a tag.
	 *
	 * @param SlotTag				Component tag used to find the Static Mesh Component
	 * @param MeshPtr				Soft pointer to the mesh. Must be valid/loaded.
	 * @param SocketName			Optional socket name to attach the component.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Inventory|Equipment|Equipment Manager")
	virtual USkeletalMeshComponent* SetSkeletalMeshAsset(const FGameplayTag& SlotTag, const TSoftObjectPtr<USkeletalMesh>& MeshPtr, FName SocketName = NAME_None);

	/**
	 * Sets a mesh asset to a specific slot represented by a tag.
	 */
	virtual UMeshComponent* SetMeshToSlot(const FGameplayTag& SlotTag, UStreamableRenderAsset* Mesh, FName SocketName = NAME_None);
	
	/**
	 * Clears a mesh asset, reverting to the original mesh if applicable.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Inventory|Equipment|Equipment Manager")
	virtual UMeshComponent* ClearMeshAsset(FGameplayTag SlotTag);

	/**
	 * Creates an Equipment Event Payload that can be used with a Gameplay Event.
	 * Meant to be invoked from the FEquipment List, when preparing an Equipment Event. 
	 */
	virtual void SendEquipmentEvent(const FGameplayTag& EventTag, UNinjaEquipment* EquipmentInstance) const;
	
	/**
	 * Responds to equipment being added via the fast array replication.
	 * Meant to be invoked from the FEquipmentList replication system.
	 */
	virtual void HandleEquipmentAdded(const FEquipmentEntry& Entry, int32 Idx);

	/**
	 * Responds to equipment states being changed via the fast array replication.
	 * Meant to be invoked from the FEquipmentList replication system.
	 */
	virtual void HandleEquipmentStateChanged(const FEquipmentEntry& Entry, int32 Idx);

	/**
	 * Responds to equipment being removed via the fast array replication.
	 * Meant to be invoked from the FEquipmentList replication system.
	 */
	virtual void HandleEquipmentRemoved(const FEquipmentEntry& Entry, int32 Idx);

protected:

	/**
	 * Query used to retrieve equipment slots from the Inventory Manager.
	 * Should return all containers, including ones for cosmetic equipment.
	 */
	UPROPERTY(EditDefaultsOnly, Category = "Equipment Manager")
	FGameplayTagQuery AllEquipmentContainersQuery;

	/**
	 * Query used to retrieve equipment slots from the Inventory Manager.
	 * Should return containers that can contribute to the gear level.
	 */
	UPROPERTY(EditDefaultsOnly, Category = "Equipment Manager")
	FGameplayTagQuery RelevantEquipmentContainersQuery;
	
	/**
	 * Maps slot tags to attachment socket names.
	 * 
	 * Necessary for actors that are attached to sockets and not to specific components,
	 * which is the case for Skeletal and Static Meshes.
	 */
	UPROPERTY(EditDefaultsOnly, Category = "Equipment Manager", meta = (Categories = "Equipment.Slot"))
	TMap<FGameplayTag, FName> SlotSocketMapping;

	/**
	 * How often the component will try to retrieve the Inventory Manager Component from the owner.
	 * This only happens during the Equipment Initialization, when the Inventory must be available.
	 */
	UPROPERTY(EditDefaultsOnly, Category = "Equipment Manager")
	float InventoryManagerPollInterval;

	/**
	 * Determines for how long the component will wait for the Inventory Manager Component.
	 * This only happens during the Equipment Initialization, when the ASC must be available.
	 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Equipment Manager")
	float InventoryManagerMaxWait;
	
	/** A data asset containing all default slot configurations. */
	UPROPERTY(EditDefaultsOnly, Category = "Equipment Manager")
	TObjectPtr<UNinjaEquipmentSlotDataAsset> DefaultSlotData;

	/** State applied to equipment if there's no better alternative. */
	UPROPERTY(EditDefaultsOnly, Category = "Equipment Manager")
	FGameplayTag DefaultStateTag;

	/**
	 * Attempts to connect to an Inventory Manager already available.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Inventory|Inventory Manager")
	void TryConnectToInventoryManager();

	/**
	 * Initializes the inverse socket/slot tag map.
	 */
	void CreateInverseSocketMap();
	
	/**
	 * Effectively initializes the Equipment, once the Inventory Manager Component is ready.
	 */
	UFUNCTION()
	virtual void InitializeEquipment();
	
	/**
	 * Loads default meshes that can be assigned to empty Equipment Containers.
	 *
	 * These meshes are used when an equipment container (or "slot") has no item assigned
	 * and should display a default mesh, such as the character's torso or hands, while there's
	 * no vest or gloves assigned.
	 */
	virtual void LoadDefaultMeshes();

	/**
	 * Loads assets for equipment, from an instance managed by this component.
	 */
	virtual void LoadEquipmentAssets(UNinjaEquipment* Equipment);

	/**
	 * Assigns all meshes configured in the default Slot setup.
	 * Should be invoked via the Asset Manager, as a Streamable Delegate, when the meshes are loaded.
	 */
	virtual void AssignDefaultMeshes();
	
	/**
	 * Clears all default meshes for slots defined in the data asset.
	 */
	virtual void ClearDefaultSlotMeshes();

	/**
	 * Finds the mesh component for a given current type and slot tag.
	 */
	virtual UMeshComponent* FindSlotMeshComponent(TSubclassOf<UMeshComponent> ComponentType, const FGameplayTag& SlotTag);
	
	/**
	 * Reverts meshes from a piece of equipment that has been removed.
	 *
	 * Exposed as Blueprint Native events for quality-of-life, but it's if you are constantly
	 * iterating over default slots and default meshes, it might be better to implement this
	 * function in C++.
	 * 
	 * @param Equipment
	 *		Equipment instance providing details that can be used to determine which meshes must
	 *		be reverted to their initial states, using the current Default Slot configuration.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Equipment Manager")
	void RevertMeshesFromRemovedEquipment(const UNinjaEquipment* Equipment);

	/**
	 * Reverts meshes from all slots represented in the tag container.
	 *
	 * Exposed as Blueprint Native events for quality-of-life, but it's if you are constantly
	 * iterating over default slots and default meshes, it might be better to implement this
	 * function in C++.
	 * 
	 * @param SlotsToRevert
	 *		All Slot Tags that must be reverted.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Equipment Manager")
	void RevertMeshesFromSlots(FGameplayTagContainer& SlotsToRevert);

	/**
	 * Selects the appropriate Default Mesh for a given slot.
	 * 
	 * @param SlotTag			Slot Tag that is being reverted to the default mesh.
	 * @param OutMesh			An optional Equipment Skeletal Mesh. Empty if no mesh is set for the slot.
	 * @return					True of a mesh was found.					
	 */
	UFUNCTION(BlueprintCallable, Category = "Equipment Manager")
	bool SelectDefaultMesh(const FGameplayTag& SlotTag, FEquipmentSkeletalMesh& OutMesh) const;

	/**
	 * Selects the appropriate Default Mesh for a given slot.
	 * Internal version compatible with Unreal Engine 5.3 and 5.4+, but requiring specific proxies.
	 * 
	 * @param SlotTag			Slot Tag that is being reverted to the default mesh.
	 * @return					An optional Equipment Skeletal Mesh. Empty if no mesh is set for the slot.
	 */	
	virtual TOptional<FEquipmentSkeletalMesh> Internal_SelectDefaultMesh(const FGameplayTag& SlotTag) const;
	
	/**
	 * Retrieves the Skeletal Mesh Component for a Slot Tag.
	 *
	 * @param SlotTag			Provides the Skeletal Mesh Component related to the slot.
	 * @return					The Skeletal Mesh Component that represents the slot.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Equipment Manager")
	USkeletalMeshComponent* GetMeshComponentForSlotTag(FGameplayTag SlotTag) const;

	/**
	 * Effectively sets a Skeletal Mesh to a given Slot.
	 * 
	 * @param SkeletalMesh		Skeletal Mesh configuration used to obtain the mesh. 
	 * @param SlotTag			Slot that will receive the mesh. Must be unassigned.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Equipment Manager")
	void SetDefaultMeshToSlot(const FEquipmentSkeletalMesh& SkeletalMesh, FGameplayTag SlotTag);

	/**
	 * Sets the visibility for all equipment slots represented by the provided tags.
	 */
	int32 SetVisibilityToEquipmentSlots(const FGameplayTagContainer& SlotTags, bool bVisible) const;

	/**
	 * Performs the calculation to determine the average gear level for the absolute value. 
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Equipment Manager", meta = (ReturnDisplayName = "Average Gear Level"))
	float OnGetAverageGearLevel(float AbsoluteGearLevel) const;
	
	/**
	 * Destroys all equipment, usually due to an owner being destroyed.
	 */
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "Ninja Inventory|Equipment|Equipment Manager")
	void DestroyEquipment();

	/**
	 * Provides the Attribute Sets for a given state, to a given Ability Component.
	 *
	 * @param AbilitySystemComponent		Ability Component receiving the Attribute Sets.
	 * @param StateConfiguration			State containing the Attributes being granted.
	 * @param OutHandles					Updated Ability Handles, containing granted Attribute Sets.
	 */
	virtual void AddAttributeSets(UAbilitySystemComponent* AbilitySystemComponent, FEquipmentStateConfiguration StateConfiguration,
		FEquipmentAbilityHandles& OutHandles) const;

	/**
	 * Provides the Gameplay Effects for a given state, to a given Ability Component.
	 *
	 * @param AbilitySystemComponent		Ability Component receiving the Gameplay Effects.
	 * @param Equipment						Piece of equipment used as the source.
	 * @param StateConfiguration			State containing the Attributes being granted.
	 * @param OutHandles					Updated Ability Handles, containing granted Gameplay Effect Handles.
	 */	
	virtual void ApplyGameplayEffects(UAbilitySystemComponent* AbilitySystemComponent, UNinjaEquipment* Equipment,
		FEquipmentStateConfiguration StateConfiguration, FEquipmentAbilityHandles& OutHandles) const;	

	/**
	 * Determines the best effect level for an Equipment Gameplay Effect.
	 *
	 * @param Equipment						Equipment providing access to the backing Item, if needed.
	 * @param Entry							Configuration for the equipment, including the original effect level value.
	 */
	virtual float DetermineEffectLevel(const UNinjaEquipment* Equipment, const FEquipmentGameplayEffect& Entry) const;

	/**
	 * Applies magnitudes to the Effect Spec Handle that was created for the equipment.
	 *
	 * By default, it provides the following behavior:
	 *
	 * 1. Automatically sets the Item Level to the Gameplay Effect, obtained via the upgradeable interface.
	 * 2. Checks if the Item implements IItemMagnitudeValueInterface. If so, matches the GE tags with that.
	 * 3. Checks if the Equipment implements IItemMagnitudeValueInterface. If so, matches the GE tags with that.
	 *
	 * @param Equipment						Equipment that might provide Set By Caller Magnitude values.
	 * @param EffectSpecHandle				Handle that will receive the values.
	 */
	virtual void SetByCallerMagnitudes(UNinjaEquipment* Equipment, FGameplayEffectSpecHandle& EffectSpecHandle) const;

	/**
	 * Applies magnitudes to the Effect Spec Handle that was created for the equipment.
	 * 
	 * Specifically uses the IItemMagnitudeValueInterface in the provided Implementation, retrieving all key/value
	 * pairs and then setting matching data tags to the spec handle.
	 */
	virtual void SetByCallerMagnitudesFromInterface(const UObject* Implementation, const UNinjaInventoryItem* Item, FGameplayEffectSpecHandle& EffectSpecHandle) const;

	/**
	 * Provides the Gameplay Abilities for a given state, to a given Ability Component.
	 *
	 * @param AbilitySystemComponent		Ability Component receiving the Gameplay Abilities.
	 * @param Equipment						Piece of equipment used as the source.
	 * @param StateConfiguration			State containing the Attributes being granted.
	 * @param OutHandles					Updated Ability Handles, containing granted Gameplay Ability Handles.
	 */		
	virtual void GrantGameplayAbilities(UAbilitySystemComponent* AbilitySystemComponent, UNinjaEquipment* Equipment,
		FEquipmentStateConfiguration StateConfiguration, FEquipmentAbilityHandles& OutHandles) const;

	/**
	 * Revokes the Gameplay Abilities contained in the handle list.
	 *
	 * @param AbilitySystemComponent		Ability Component removing the Gameplay Abilities.
	 * @param Handles						All handles for abilities being removed.
	 */		
	virtual void ClearGameplayAbilities(UAbilitySystemComponent* AbilitySystemComponent, FEquipmentAbilityHandles& Handles) const;

	/**
	 * Revokes the Gameplay Abilities contained in the handle list.
	 *
	 * @param AbilitySystemComponent		Ability Component removing the Gameplay Effects.
	 * @param Handles						All handles for effects being removed.
	 */		
	virtual void RemoveGameplayEffects(UAbilitySystemComponent* AbilitySystemComponent, FEquipmentAbilityHandles& Handles) const;

	/**
	 * Revokes the Attribute Sets contained in the handle list.
	 *
	 * @param AbilitySystemComponent		Ability Component removing the Attribute Sets.
	 * @param Handles						All handles for attribute sets being removed.
	 */		
	virtual void RemoveAttributeSets(UAbilitySystemComponent* AbilitySystemComponent, FEquipmentAbilityHandles& Handles) const;
	
private:

	/** Controls if the inventory manager was already found. */
	uint8 bHasInventoryManager:1;
	
	/** Handle for default meshes displayed when there's no equipment. */
	TSharedPtr<FStreamableHandle> DefaultSlotsHandle;

	/** All pieces of equipment stored in this inventory. */
	UPROPERTY(Replicated)
	FEquipmentList ManagedEquipment;

	/** All equipment slots currently hidden. */
	FGameplayTagContainer HiddenSlotTags;

	/**
	 * Inverse map of slots, which we'll maintain to keep an O(1) efficiency while
	 * searching for slots by their Socket Names (the FName).
	 *
	 * It has to map to a Container because we still want to allow the original map to
	 * have multiple Slot Tags mapped to the same Attachment Socket Name.
	 */
	TMap<FName, FGameplayTagContainer> InverseSlotSocketMapping;
	
	/**
	 * Equipment that was added, but it is waiting for this component to replicate.
	 */
	UPROPERTY()	
	TArray<TObjectPtr<UNinjaEquipment>> EquipmentWaitingForReplication;

	/**
	 * Items that are waiting for an Inventory Manager to replicate.
	 * They might also be waiting for this component to actually begin play.
	 */
	UPROPERTY()
	TArray<TObjectPtr<UNinjaInventoryItem>> ItemsWaitingForInventory;

	/**
	 * Action that waits for the Inventory Manager Component to be ready.
	 * This is a pre-requisite for the Equipment Manager to initialize.
	 */	
	UPROPERTY()
	TObjectPtr<UNinjaInventoryAction_WaitForInventorySystem> InventoryManagerAction;	

	UFUNCTION(Server, Reliable, WithValidation)
	void Server_ChangeEquipmentState(UNinjaEquipment* Equipment, FGameplayTag NewStateTag);
	
};
