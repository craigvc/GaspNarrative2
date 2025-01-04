// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Serialization/FFactionSerialization.h"
#include "Types/FFactionMembershipList.h"
#include "NinjaFactionComponent.generated.h"

class UNinjaFactionDataAsset;
class UNinjaFactionSubsystem;

DECLARE_LOG_CATEGORY_EXTERN(LogNinjaFactionComponent, Log, All);

/**
 * Manages all Factions and Reputations from this component's owner.
 */
UCLASS(Blueprintable, ClassGroup=(NinjaFactions), DisplayName="Faction Component", meta=(BlueprintSpawnableComponent))
class NINJAFACTIONS_API UNinjaFactionComponent : public UActorComponent
{

    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFactionMemebershipMCDelegate, const FFactionMembership&, FactionMembership);
    
    GENERATED_BODY()

public:

    /** Notifies subscribers about a Faction Membership that has been added. */
    UPROPERTY(BlueprintAssignable)
    FFactionMemebershipMCDelegate OnFactionAdded;

    /** Notifies subscribers about a Faction Membership that has been removed. */
    UPROPERTY(BlueprintAssignable)
    FFactionMemebershipMCDelegate OnFactionRemoved;

    /** Notifies subscribers about Reputation changes in a Faction Membership. */
    UPROPERTY(BlueprintAssignable)
    FFactionMemebershipMCDelegate OnReputationChanged;

	/** Notifies subscribers about changes in a main status. */
	UPROPERTY(BlueprintAssignable)
	FFactionMemebershipMCDelegate OnMainStatusChanged;
	
    /** Notifies subscribers about Tier changes in a Faction Membership. */
    UPROPERTY(BlueprintAssignable)
    FFactionMemebershipMCDelegate OnTierChanged;
    
    UNinjaFactionComponent();

    // -- Begin Actor Component implementation
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    virtual void BeginPlay() override;
    // -- End Actor Component implementation

    /**
     * Provides all Factions assigned to this component. 
     */
    UFUNCTION(BlueprintPure, Category = "Ninja Factions|Faction Member Component", meta = (ReturnDisplayName = "Memberships"))
    TArray<FFactionMembership> GetFactionMemberships() const;

    /**
     * Retrieves the main faction to be considered for simple attitude checks.
     *
     * This method is only truly reliable in a context where only one Main Faction can ever be present.
     * If your design requires multiple Main Factions assigned to the same character, then you may need
     * to overwrite this method with your logic.
     * 
     * @param OutMembership     Membership data for the Faction to be considered as the main one.
     * @return                  True if a main membership was found. False otherwise.
     */
    UFUNCTION(BlueprintPure, Category = "Ninja Factions|Faction Member Component", meta = (ReturnDisplayName = "Success"))
    virtual bool GetMainFactionMembership(UPARAM(DisplayName = "Memberships") FFactionMembership& OutMembership) const;

    /**
     * Provides a specific membership for a faction.
     *
     * @param FactionData       Original data asset for the membership.
     * @param OutMembership     Membership data for the Faction provided.
     * @return                  True if a membership was found. False otherwise.
     */
    UFUNCTION(BlueprintPure, Category = "Ninja Factions|Faction Member Component", meta = (ReturnDisplayName = "Success"))
    bool GetFactionMembership(const UNinjaFactionDataAsset* FactionData, UPARAM(DisplayName = "Membership") FFactionMembership& OutMembership) const;

	/**
	 * Adds a faction from a pre-defined membership.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Factions|Faction Member Component", meta=(DefaultToSelf = "Source"))
	void AddFactionFromMembership(const FFactionMembership& Membership, const UObject* Source, UPARAM(meta = (Categories = "Factions.Event")) FGameplayTag EventTag);
	
    /**
     * Register this component as member of a given faction.
     *
     * @param FactionData       Faction Data to be added. Must be valid.
     * @param Reputation        Amount of reputation to be added. Must zero or greater.
     * @param Source            An object that was the source of the granted faction.
     * @param EventTag			The reason why this faction is being granted.
     * @param bMainFaction		Optional parameter informing if this is supposed to become the Main Faction.
     */
    UFUNCTION(BlueprintCallable, Category = "Ninja Factions|Faction Member Component", meta=(DefaultToSelf = "Source"))
    virtual void AddFaction(const UNinjaFactionDataAsset* FactionData, int32 Reputation, const UObject* Source,
    	UPARAM(meta = (Categories = "Factions.Event")) FGameplayTag EventTag, bool bMainFaction = false);

    /**
     * Adds a specific reputation to a given faction.
     *
     * It checks if the component has a Faction Membership before adding the reputation.
     * If the component has no reputation, then nothing happens.
     *
     * @param FactionData       Faction used as a reference. Must be valid.
     * @param Reputation        Amount of reputation to be added. May be positive or negative (zero is discarded).
     * @param Source            Any object that was the source of the granted reputation.
     * @param EventTag          The reason why this reputation is being modified.
     */
    UFUNCTION(BlueprintCallable, Category = "Ninja Factions|Faction Member Component", meta=(DefaultToSelf = "Source"))    
    virtual void AddReputation(const UNinjaFactionDataAsset* FactionData, int32 Reputation, const UObject* Source,
    	UPARAM(meta = (Categories = "Factions.Event")) FGameplayTag EventTag);

    /**
     * Adds reputation from a given source.
     *
     * @param Source            Any object that was the source of the granted reputation.
     * @param EventTag			The reason why this reputation is being granted/removed.
     */
    UFUNCTION(BlueprintCallable, Category = "Ninja Factions|Faction Member Component")
    virtual void AddReputationFromSource(const UObject* Source,
    	UPARAM(meta = (Categories = "Factions.Event")) FGameplayTag EventTag);

    /**
     * Defines the provided Faction as the Main Faction.
     *
     * Only works if the owner is already a member of the faction, and any other faction currently
     * set as the Main Faction will be reverted and lose that status.
     * 
     * It won't do anything if the provided Faction Data is already the main faction.
     * 
     * @param FactionData		Faction to be defined as the new Main Faction.
     */
    UFUNCTION(BlueprintCallable, Category = "Ninja Factions|Faction Member Component")
	virtual void SetMainFaction(const UNinjaFactionDataAsset* FactionData);
	
    /**
     * Removes a faction from this component.
     * 
     * @param FactionData       Faction Data to be added. Must be valid.
     */
    UFUNCTION(BlueprintCallable, Category = "Ninja Factions|Faction Member Component")
    virtual void RemoveFaction(const UNinjaFactionDataAsset* FactionData);

	/**
	 * Resets all factions from the inventory. Usually necessary before a load operation.
	 * Can only be executed in the authoritative version.
	 */
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "Ninja Factions|Faction Member Component")
	void ResetFactions();
	
    /**
     * Checks if a given Faction is assigned to this component.
     * 
     * @param FactionData       Faction Data to be evaluated. Must be valid.
     * @return                  True if this Faction Tag is assigned to this component. 
     */
    UFUNCTION(BlueprintPure, Category = "Ninja Factions|Faction Member Component", meta = (ReturnDisplayName = "Success"))
    bool HasMembership(const UNinjaFactionDataAsset* FactionData) const;

	/**
	 * Provides the reputation tier for a given Faction Data.
	 * 
	 * @param FactionData			Faction Data for the Test. Not necessarily assigned. 
	 * @param OutReputationTier     Tier equivalent to the amount of reputation.
	 * @return                      True if a tier was found for the given reputation.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Factions|Faction Member Component", meta = (ReturnDisplayName = "Success"))
	bool GetReputationTier(const UNinjaFactionDataAsset* FactionData, UPARAM(DisplayName = "Reputation Tier") FFactionReputationTableRow& OutReputationTier) const;
	
    /**
     * Provides the owner's rewards for a given event.
     *
     * This function expects the owner to be a valid implementation of the Faction Source interface.
     * 
     * @param OutRewards        Map with rewards. Reputation gains will be added or merged with existing entries.
     * @param EventTag			Arbitrary event to trigger the output.
     */
    UFUNCTION(BlueprintCallable, Category = "Ninja Factions|Faction Member Component")
    void GetReputationRewards(TMap<UNinjaFactionDataAsset*, float>& OutRewards,
    	UPARAM(meta = (Categories = "Factions.Event")) FGameplayTag EventTag) const;

	/**
	 * Determines the attitude from this Member towards a Target.
	 * 
	 * @param Target    Target Pawn to which the faction test is done against. Must be a valid faction member.
	 * @return          The attitude between both pawns.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Factions|Faction Member Component", meta = (ReturnDisplayName = "Attitude"))
	ETeamAttitude::Type GetAttitude(const AActor* Target) const;

	/**
	 * Basic check to ensure a source and an event are valid.
	 * It can optionally check if the source implements the Source Interface
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Factions|Faction Member Component")
	virtual bool IsValidSourceAndEvent(const UObject* Source, const FGameplayTag& EventTag, bool bCheckInterface = true) const;

	/**
	 * Provides the Faction Record that can be used for serialization.
	 * It contains records for all memberships.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Factions|Faction Member", meta = (ReturnDisplayName = "Faction Record"))
	FFactionManagerRecord GetFactionRecordForSerialization() const;

	/**
	 * Provides all serializable memberships as their records.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Factions|Faction Member", meta = (ReturnDisplayName = "Membership Records"))
	TArray<FFactionMembershipRecord> GetMembershipRecordsForSerialization() const;
	
	/**
	 * Restores the faction data using the provided record.
	 */
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "Ninja Factions|Faction Member")
	virtual void LoadFactionMemberships(const FFactionManagerRecord& FactionManagerRecord);
	
protected:

	/**
	 * Faction Memberships granted by default.
	 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Faction Member")
	TArray<FFactionMembership> DefaultFactions;
	
    /**
     * Unified access to the Faction Subsystem.
     */
    UFUNCTION(BlueprintPure, Category = "Ninja Factions|Faction Member Component")
    UNinjaFactionSubsystem* GetFactionSubsystem() const;
	
    /**
     * Modifies the provided reputation to process the Reputation and Tier.
     * 
     * @param Membership        Membership receiving the new reputation.
     * @param Reputation        Amount of reputation being added (or subtracted).
     * @return                  True if changes actually happened in the membership.
     */
    UFUNCTION(BlueprintCallable, Category = "Ninja Factions|Faction Member Component")
    bool ProcessReputationAndTier(FFactionMembership& Membership, int32 Reputation = 0) const;
    
    /**
     * Synchronizes default factions.
     *
     * Usually meant to be invoked during Begin Play (or similar places). This is either retrieved
     * from the component properties directly or you can extend this to obtain default factions
     * from a save-game file, backend server, etc.
     */
    UFUNCTION(BlueprintNativeEvent, BlueprintAuthorityOnly, Category = "Faction Member Component")
    void SynchronizeDefaultFactions();
    
    /**
     * Checks if a given faction can be assigned to the owner.
     *
     * This test is meant to be used in two contexts: First, as expected, when the Faction
     * is assigned to the owner and second, during Server RPCs assigning factions.
     * 
     * @param FactionData       Faction Data to be evaluated.
     * @param Reputation        Amount of reputation to be granted by default.
     * @param Source            Any object that was the source of the granted faction.
     * @param EventTag	        The reason why this faction is being granted.
     * @return                  True if the Faction can be assigned.
     */
    UFUNCTION(BlueprintNativeEvent, Category = "Faction Member Component")
    bool IsValidFactionAssignment(const UNinjaFactionDataAsset* FactionData, int32 Reputation, const UObject* Source,
    	UPARAM(meta = (Categories = "Factions.Event")) FGameplayTag EventTag) const;

    /**
     * Checks if an amount of reputation can be assigned to a faction.
     *
     * This test is meant to be used in two contexts: First, as expected, when the Faction
     * is assigned to the owner and second, during Server RPCs assigning factions.
     *
     * @param FactionData       Faction used as a reference. Must be valid.
     * @param Reputation        Amount of reputation to be added. May be positive or negative.
     * @param Source            Any object that was the source of the granted reputation.
     * @param EventTag	        The reason why this reputation is being granted/removed.
     * @return                  True if the reputation amount can be assigned.
     */
    UFUNCTION(BlueprintNativeEvent, Category = "Faction Member Component")
    bool IsValidFactionUpdate(const UNinjaFactionDataAsset* FactionData, int32 Reputation, const UObject* Source,
    	UPARAM(meta = (Categories = "Factions.Event")) FGameplayTag EventTag) const;

	/**
	 * Creates a Membership Record that can be used for serialization.
	 * Internal version compatible with Unreal Engine 5.3 and 5.4+, but requiring specific proxies.
	 */
	virtual TOptional<FFactionMembershipRecord> Internal_ConvertToMembershipRecord(const FFactionMembership& Entry) const;

	/**
	 * Loads a record that has been fully initialized by the Asset Manager.
	 */
	void HandleFactionAssetsLoaded(FFactionManagerRecord FactionManagerRecord);

	/**
	 * Creates a Membership Entry from data obtained from a record.
	 * Internal version compatible with Unreal Engine 5.3 and 5.4+, but requiring specific proxies.
	 */
	virtual TOptional<FFactionMembership> Internal_ConvertFromMembershipRecord(const FFactionMembershipRecord& Record) const;

private:

    /** Stores all Factions this component is a member of. */
    UPROPERTY(Replicated)
    FFactionMembershipList MembershipList;

    /** Server RPC to add a new Faction. */
    UFUNCTION(Server, Reliable, WithValidation)
	void Server_AddFaction(const UNinjaFactionDataAsset* FactionData, int32 Reputation, const UObject* Source, const FGameplayTag& EventTag, const bool bMainFaction); 

    /** Server RPC to add reputation to a Faction. */
    UFUNCTION(Server, Reliable, WithValidation)
    void Server_AddReputation(const UNinjaFactionDataAsset* FactionData, int32 Reputation, const UObject* Source, const FGameplayTag& EventTag); 

    /** Server RPC to add reputation from a source. */
    UFUNCTION(Server, Reliable, WithValidation)
    void Server_AddReputationFromSource(const UObject* Source, const FGameplayTag& EventTag); 

	/** Server RPC to modify the Main Faction. */
	UFUNCTION(Server, Reliable, WithValidation)
	void Server_SetMainFaction(const UNinjaFactionDataAsset* FactionData); 
	
    /** Server RPC to remove an existing Faction. */
    UFUNCTION(Server, Reliable, WithValidation)
    void Server_RemoveFaction(const UNinjaFactionDataAsset* FactionData); 
	
};
