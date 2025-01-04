// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "GameplayEffect.h"
#include "GameplayEffectTypes.h"
#include "FDamageEntry.generated.h"

class UPackageMap;

#define TIMESTAMP_NONE	-1.f

/**
 * Contains information about damage applied or received.
 */
USTRUCT(BlueprintType, meta = (HasNativeBreak = "/Script/NinjaCombat.NinjaCombatFunctionLibrary.BreakDamageStruct"))
struct NINJACOMBAT_API FDamageEntry : public FFastArraySerializerItem
{

    GENERATED_BODY()

    /** The unique handle that identifies this damage. */
    UPROPERTY()
    int32 Handle;

    /** Pointer to the Effect Context that generated this damage. */
    UPROPERTY()
    FGameplayEffectContextHandle EffectContext;

    /** Captured tags from the source. */
    UPROPERTY()
    FGameplayTagContainer CapturedSourceTags;

    /** Capture tags from the target. */
    UPROPERTY()
    FGameplayTagContainer CapturedTargetTags;

	/** Marks the entity as handled by the current client. */
    UPROPERTY(NotReplicated)
    bool bHandled;
    
    /**
     * Constructs a new damage info with empty data.
     */
    FDamageEntry() : Handle(INDEX_NONE), bHandled(false)
    {
        CapturedSourceTags = FGameplayTagContainer::EmptyContainer;
        CapturedTargetTags = FGameplayTagContainer::EmptyContainer;
    }

    /**
     * Constructs a new damage info with required information.
     *
     * @param Handle			Handle for the damage.
     * @param EffectSpec        Details about the effect responsible for causing this damage.
     */
    explicit FDamageEntry(const int32 Handle, const FGameplayEffectSpec& EffectSpec)
        : Handle(Handle), EffectContext(EffectSpec.GetContext()), bHandled(false)
    {
        Initialize(Handle, EffectSpec);
    }

	/**
	 * Creates a new entry with a valid identifier.
	 */
	static FDamageEntry GenerateNewEntry(const FGameplayEffectSpec& EffectSpec);
	
    /**
     * Allows initialization post-constructor.
     */
    void Initialize(const int32 InHandle, const FGameplayEffectSpec& InEffectSpec);
    
    /**
     * Informs if this Struct is valid.
     *
     * @return
     *      A boolean value informing if this Damage Information is valid, meaning it has
     *      a proper Timestamp and a valid Gameplay Cue Parameter.
     */
    bool IsValid() const;

	/** Informs if this is a critical hit. */
	bool IsCriticalHit() const;

	/** Informs if this is a blocked hit. */
	bool IsBlockedHit() const;
	
	/** Informs if this is a breaker hit. */
	bool IsBreakerHit() const;

	/** Informs if this is a breaker hit. */
	bool IsFatalHit() const;

	/** Informs if this is a staggering hit. */
	bool IsStaggeringHit() const;

	/** Informs if this is a fatal opportunity attack. */
	bool IsFatalOpportunityAttack() const;
	
    /**
     * Provides the actor who instigated the damage.
     *
     * @return
     *      An actor responsible for creating this damage, usually the character.
     */
    AActor* GetDamageInstigator() const;

    /**
     * Provides the actor who ultimately applied the damage.
     *
     * @return
     *      An actor responsible for applying the damage, usually the weapon.
     */
    AActor* GetDamageCauser() const;

    /**
     * Provides the damage applied by the effect spec.
     *
     * @return
     *      The amount of damage applied by the effect spec. An struct that has not been
     *      initialized will return a value of zero.
     */
    float GetDamageApplied() const;
    
    /**
     * Creates a Gameplay Cue Parameters from the current Effect Context.
     *
     * @return
     *      A Gameplay Cue Parameter Struct based on the current Effect Context assigned
     *      to this Damage Info. It will generate an empty struct in case the current
     *      Context is invalid, so consider checking that first.
     */
    FGameplayCueParameters GetGameplayCueParameters() const;

    /**
     * Optimized Serializer for the Damage Info.
     */
    bool NetSerialize(FArchive& Ar, UPackageMap* Map, bool& bOutSuccess);

    FORCEINLINE bool operator == (const FDamageEntry& In) const
        { return In.Handle == Handle && In.EffectContext == EffectContext; }

    FORCEINLINE bool operator != (const FDamageEntry& In) const
        { return In.Handle != Handle || In.EffectContext != EffectContext; }

};

template<>
struct TStructOpsTypeTraits<FDamageEntry> : TStructOpsTypeTraitsBase2<FDamageEntry>
{
    enum
    {
        WithNetSerializer = true
    };
};