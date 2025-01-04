// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Types/FDamageEntry.h"
#include "FDamageList.generated.h"

class UNinjaCombatDissolveComponent;

/**
 * A list of replicated damage entries.
 */
USTRUCT(BlueprintType)
struct FDamageList : public FFastArraySerializer
{
    GENERATED_BODY()

    /**
     * Default initializer, not meant for direct usage.
     *
     * Instead, always use the version that receives the Combat Component.
     */
    FDamageList();

    /**
     * Initializes the list with the appropriate combat component.
     *
     * @param DamageManager
     *      The Damage Manager responsible for replicating this list. Must be provided.
     */
    explicit FDamageList(UActorComponent* DamageManager);

    /**
     * Receives damage from a given Effect Spec.
     *
     * @param EffectSpec
     *      The base Spec that will be converted into the internal damage struct and
     *      then handled by the Ability System and broadcast to subscribers.
     */
    void RegisterDamageTaken(const FGameplayEffectSpec& EffectSpec);

    /**
     * Provides all entries currently stored.
     *
     * @return
     *      Array containing all entries stored.
     */
    TArray<FDamageEntry> GetEntries() const;

	/**
	 * Reinforces a damage manager if necessary.
	 * Ignored if the current one is already valid.
	 */
	void SetDamageManager(UActorComponent* NewDamageManager);
	
    // -- Begin FFastArraySerializer implementation
    void PostReplicatedAdd(const TArrayView<int32> AddedIndices, int32 FinalSize);
    void PostReplicatedChange(const TArrayView<int32>& ChangedIndices, int32 FinalSize);
    bool NetDeltaSerialize(FNetDeltaSerializeInfo& DeltaParams);
    // -- End FFastArraySerializer implementation

protected:

    /**
     * Checks the array limit and remove the oldest element, if necessary.
     */
    void CheckArrayLimits();
    
    /**
     * Broadcasts a Damage Taken, back to the owning component.
     *
     * @param DamageInfo
     *      The damage details to be broadcast.
     */
    void BroadcastDamageTaken(FDamageEntry& DamageInfo) const;

private:

	/** The default array size, configured in the project settings. */
	int32 DefaultArraySize;
	
    /** Combat component that owns this list. */
    UPROPERTY()
    TObjectPtr<UActorComponent> DamageManager;

    /** Entries that are maintained by this list. */
    UPROPERTY()
    TArray<FDamageEntry> Entries;
    
};

template<>
struct TStructOpsTypeTraits<FDamageList> : TStructOpsTypeTraitsBase2<FDamageList>
{
    enum
    {
        WithNetDeltaSerializer = true
    };
};
