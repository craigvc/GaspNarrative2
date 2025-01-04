// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Net/Serialization/FastArraySerializer.h"
#include "FCombatPool.generated.h"

class UNinjaCombatActorPoolComponent;

/**
 * Stores an entry from an Actor Pool
 */
USTRUCT()
struct FCombatPoolEntry : public FFastArraySerializerItem
{
	
	GENERATED_BODY()

	/** The class for this actor. */
	UPROPERTY()
	TSubclassOf<AActor> ActorClass;

	/** The unique identifier for this entry. */
	UPROPERTY()
	FGuid PooledActorId = FGuid();

	/** Natural order for this entry. */
	UPROPERTY()
	int32 Order = INDEX_NONE;
	
	/** The authoritative instance. */
	UPROPERTY(NotReplicated)
	TObjectPtr<AActor> AuthActor = nullptr;

	/** The client instance. */
	UPROPERTY(NotReplicated)
	TObjectPtr<AActor> ClientActor = nullptr;
	
};

/**
 * The list of pooled actors.
 */
USTRUCT(BlueprintType)
struct FCombatPoolList : public FFastArraySerializer
{
	
	GENERATED_BODY()

	FCombatPoolList();

	explicit FCombatPoolList(UNinjaCombatActorPoolComponent* PoolComponent);

	void SetPoolManager(UNinjaCombatActorPoolComponent* PoolManager);
	
	void SetActorPoolSize(const TSubclassOf<AActor>& ActorClass, int32 PoolSize);

	void Initialize();

	void AddEntry(const TSubclassOf<AActor>& ActorClass, int32 Order);

	AActor* GetActor(const TSubclassOf<AActor>& ActorClass) const;

	void Empty();

	// -- Begin FFastArraySerializer implementation
	void PostReplicatedAdd(const TArrayView<int32> AddedIndices, int32 FinalSize);
	void PreReplicatedRemove(const TArrayView<int32>& RemovedIndices, int32 FinalSize);
	bool NetDeltaSerialize(FNetDeltaSerializeInfo& DeltaParams);
	// -- End FFastArraySerializer implementation

private:

	int32 TotalPoolSize;
	
	/** Pool size for each class. */
	UPROPERTY(NotReplicated)
	TMap<TSubclassOf<AActor>, int32> ActorPoolSize;
	
	/** Component that owns this list. */
	UPROPERTY(NotReplicated)
	TObjectPtr<UNinjaCombatActorPoolComponent> PoolComponent;
	
	/** Entries that are maintained by this list. */
	UPROPERTY()
	TArray<FCombatPoolEntry> Entries;
	
};

template<>
struct TStructOpsTypeTraits<FCombatPoolList> : TStructOpsTypeTraitsBase2<FCombatPoolList>
{
	enum
	{
		WithNetDeltaSerializer = true
	};
};
