// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "FEquipmentAbilityTypes.h"
#include "GameplayTagContainer.h"
#include "Engine/StreamableManager.h"
#include "Net/Serialization/FastArraySerializer.h"
#include "FEquipment.generated.h"

class UNinjaEquipmentDataAsset;
class UNinjaEquipmentManagerComponent;
class UNinjaEquipment;
class UNinjaInventoryItem;

/** Representation of an equipment piece stored in the inventory. */
USTRUCT(BlueprintType)
struct FEquipmentEntry : public FFastArraySerializerItem
{

	GENERATED_BODY()

	/** Item backing this equipment. */
	UPROPERTY(BlueprintReadOnly, Category = Equipment)
	TObjectPtr<UNinjaInventoryItem> Item = nullptr;
	
	/** Instance spawned for this equipment. */
	UPROPERTY(BlueprintReadOnly, Category = Equipment)
	TObjectPtr<UNinjaEquipment> Equipment = nullptr;

	/** Definition for the equipment. */
	UPROPERTY(BlueprintReadOnly, Category = Equipment)
	TObjectPtr<const UNinjaEquipmentDataAsset> EquipmentData = nullptr;
	
	/** Current State this equipment is in. */
	UPROPERTY(BlueprintReadOnly, Category = Equipment)
	FGameplayTag StateTag = FGameplayTag::EmptyTag;

	/** Gameplay elements granted. */
	UPROPERTY(NotReplicated)
	FEquipmentAbilityHandles AbilityHandles;
	
	/** Previous State this equipment was in, before replication. */
	UPROPERTY(NotReplicated)
	FGameplayTag PreviousStateTag = FGameplayTag::EmptyTag;

	/** Handle for this equipment's data asset. */
	TSharedPtr<FStreamableHandle> EquipmentDataHandle;
	
};

/** List of pieces of equipment stored in an inventory. */
USTRUCT(BlueprintType)
struct FEquipmentList : public FFastArraySerializer
{
	GENERATED_BODY()

	FEquipmentList()
		: EquipmentManager(nullptr)
	{
	}

	explicit FEquipmentList(UNinjaEquipmentManagerComponent* InOwnerComponent)
		: EquipmentManager(InOwnerComponent)
	{
	}

	bool HasValidEquipmentManager() const;
	void SetEquipmentManager(UNinjaEquipmentManagerComponent* NewEquipmentManager);
	
	NINJAINVENTORYEQUIPMENT_API void AddEntry(UNinjaEquipment* Equipment, const FGameplayTag& InitialState);
	NINJAINVENTORYEQUIPMENT_API void ChangeState(const UNinjaEquipment* Equipment, FGameplayTag NewState);
	NINJAINVENTORYEQUIPMENT_API void RemoveEntry(const UNinjaEquipment* Equipment);
	NINJAINVENTORYEQUIPMENT_API void RemoveAllEntries();
	
	// -- Begin FFastArraySerializer implementation
	void PostReplicatedAdd(const TArrayView<int32> AddedIndices, int32 FinalSize);
	void PostReplicatedChange(const TArrayView<int32> ChangedIndices, int32 FinalSize);
	void PreReplicatedRemove(const TArrayView<int32> RemovedIndices, int32 FinalSize);
	bool NetDeltaSerialize(FNetDeltaSerializeInfo& DeltaParams);
	// -- End FFastArraySerializer implementation

	NINJAINVENTORYEQUIPMENT_API int32 IndexOfByEquipment(const UNinjaEquipment* Equipment) const;	
	NINJAINVENTORYEQUIPMENT_API int32 IndexOfByItem(const UNinjaInventoryItem* Item) const;
	NINJAINVENTORYEQUIPMENT_API TArray<FEquipmentEntry> FilterByQuery(const FGameplayTagQuery& Query) const;
	
private:

	friend UNinjaEquipmentManagerComponent;

	/** Replicated list of stored equipment entries. */
	UPROPERTY()
	TArray<FEquipmentEntry> Entries;

	/** Equipment component that owns this list. */
	UPROPERTY(NotReplicated)
	TObjectPtr<UNinjaEquipmentManagerComponent> EquipmentManager;

	template <typename Predicate>
	int32 IndexOfByPredicate(const Predicate SearchCriteria) const
		{ return Entries.IndexOfByPredicate(SearchCriteria); }

	template <typename Predicate>
	TArray<FEquipmentEntry> FilterByPredicate(const Predicate SearchCriteria) const
		{ return Entries.FilterByPredicate(SearchCriteria); }	
	
};

template<>
struct TStructOpsTypeTraits<FEquipmentList> : TStructOpsTypeTraitsBase2<FEquipmentList>
{
	enum { WithNetDeltaSerializer = true };
};
