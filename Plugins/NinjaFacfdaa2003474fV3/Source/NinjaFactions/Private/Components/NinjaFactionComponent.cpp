// Ninja Bear Studio Inc., all rights reserved.
#include "Components/NinjaFactionComponent.h"

#include "NinjaFactionSubsystem.h"
#include "NinjaFactionTags.h"
#include "Data/NinjaFactionDataAsset.h"
#include "Engine/AssetManager.h"
#include "Engine/GameInstance.h"
#include "Engine/World.h"
#include "Interfaces/FactionMemberInterface.h"
#include "Interfaces/FactionSourceInterface.h"
#include "Net/UnrealNetwork.h"
#include "Types/FFactionReputationTableRow.h"

DEFINE_LOG_CATEGORY(LogNinjaFactionComponent);

UNinjaFactionComponent::UNinjaFactionComponent() : MembershipList(this)
{
    PrimaryComponentTick.bCanEverTick = true;
    PrimaryComponentTick.bStartWithTickEnabled = false;
    SetIsReplicatedByDefault(true);
}

void UNinjaFactionComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    DOREPLIFETIME(ThisClass, MembershipList);
}

void UNinjaFactionComponent::BeginPlay()
{
    Super::BeginPlay();
    SynchronizeDefaultFactions();
}

TArray<FFactionMembership> UNinjaFactionComponent::GetFactionMemberships() const
{
    return MembershipList.GetFactionMemberships();
}

bool UNinjaFactionComponent::GetMainFactionMembership(FFactionMembership& OutMembership) const
{
	// Still pending synchronization of factions. Probably because the owner has just been possessed.
	if (MembershipList.CountFactionMemberships() == 0 && !DefaultFactions.IsEmpty())
	{
		const int32 Idx = DefaultFactions.IndexOfByPredicate([](const FFactionMembership& Membership)
			{ return Membership.IsMainFaction(); });

		if (Idx != INDEX_NONE)
		{
			OutMembership = DefaultFactions[Idx];
			return true;
		}
	}

	// The membership list has been synchronized, retrieve from there instead.
	if (MembershipList.CountFactionMemberships() > 0)
	{
		TArray<FFactionMembership> MainFactions = MembershipList.GetMainFactionMemberships();
		if (MainFactions.Num() > 0)
		{
			OutMembership = MainFactions[0];
			return true;
		}
	}

    UE_LOG(LogNinjaFactionComponent, Warning, TEXT("Unable to determine the Main Faction for %s!"), *GetNameSafe(GetOwner()));
    return false;
}

bool UNinjaFactionComponent::GetFactionMembership(const UNinjaFactionDataAsset* FactionData,
    FFactionMembership& OutMembership) const
{
    const FFactionMembership* Membership = MembershipList.GetFactionMembership(FactionData);
    if (Membership != nullptr)
    {
        OutMembership = *Membership;
        return true;
    }

    return false;
}

void UNinjaFactionComponent::AddFactionFromMembership(const FFactionMembership& Membership, const UObject* Source, FGameplayTag EventTag)
{
	const UNinjaFactionDataAsset* FactionData = Membership.FactionData;
	const int32 Reputation = Membership.Reputation;
	const bool bMainFaction = Membership.bMainFaction;
	AddFaction(FactionData, Reputation, Source, EventTag, bMainFaction);
}

void UNinjaFactionComponent::AddFaction(const UNinjaFactionDataAsset* FactionData, const int32 Reputation,
	const UObject* Source, const FGameplayTag EventTag, const bool bMainFaction)
{
    check(FactionData);
    if (Reputation < 0.f) return;
    if (HasMembership(FactionData)) return;
    if (!IsValidFactionAssignment(FactionData, Reputation, Source, EventTag)) return;

    if (GetOwner()->HasAuthority())
    {
        FFactionMembership Membership(FactionData);
    	Membership.bMainFaction = bMainFaction;
    	
        if (ProcessReputationAndTier(Membership, Reputation))
        {
            MembershipList.AddFactionMembership(Membership);
        }
    }
    else if (GetOwner()->GetLocalRole() == ROLE_AutonomousProxy)
    {
        Server_AddFaction(FactionData, Reputation, Source, EventTag, bMainFaction);
    }
}

void UNinjaFactionComponent::AddReputation(const UNinjaFactionDataAsset* FactionData, const int32 Reputation,
    const UObject* Source, const FGameplayTag EventTag)
{
    check(FactionData);
    if (Reputation == 0.f) return;

	FFactionMembership Membership;
	if (!GetFactionMembership(FactionData, Membership))
	{
    	UE_LOG(LogNinjaFactionComponent, Warning, TEXT("Actor is not a member of %s!"), *GetNameSafe(FactionData->GetClass()));
	    return;
    }
	
	if (!IsValidFactionUpdate(FactionData, Reputation, Source, EventTag))
	{
		UE_LOG(LogNinjaFactionComponent, Warning, TEXT("Invalid Faction Update: reputation: %d, source: %s, event: %s!"),
			Reputation, *GetNameSafe(Source), *EventTag.ToString());
		
		return;
	}

	if (!ProcessReputationAndTier(Membership, Reputation))
	{
		UE_LOG(LogNinjaFactionComponent, Warning, TEXT("No actual Faction/Tier changes to perform for %s (Faction: %s, Reputation: %d)."),
			*GetNameSafe(GetOwner()), *GetNameSafe(FactionData), Reputation);
	}

    if (GetOwner()->HasAuthority())
    {
        MembershipList.UpdateFactionMembership(Membership);
    }
    else if (GetOwner()->GetLocalRole() == ROLE_AutonomousProxy)
    {
        Server_AddReputation(FactionData, Reputation, Source, EventTag);
    }
}

void UNinjaFactionComponent::AddReputationFromSource(const UObject* Source, const FGameplayTag EventTag)
{
    if (!IsValidSourceAndEvent(Source, EventTag)) return;

    const TMap<UNinjaFactionDataAsset*, int32> Rewards = IFactionSourceInterface::Execute_GetReputationRewards(Source, this, EventTag);
    if (Rewards.IsEmpty()) return;

    bool bHasValidChanges = false;
    for (auto It(Rewards.CreateConstIterator()); It; ++It)
    {
        const UNinjaFactionDataAsset* FactionData = It.Key();
        const int32 Reputation = It.Value();
        
        FFactionMembership Membership;
        GetFactionMembership(FactionData, Membership);

        if (Membership.IsValid() && ProcessReputationAndTier(Membership, Reputation))
        {
            // We just need to know for sure that at least one change will actually happen.
            //
            // It may be tempting to remove entries related to invalid memberships at this
            // moment, but keep in mind that these are filtered-out early on, once we reach
            // the "Add Reputation" call, in the authoritative client.
            
            bHasValidChanges = true;
            break;
        }
    }

    if (bHasValidChanges)
    {
        if (GetOwner()->HasAuthority())
        {
            for (auto It(Rewards.CreateConstIterator()); It; ++It)
            {
                const UNinjaFactionDataAsset* FactionData = It.Key();
                const int32 Reputation = It.Value();
                AddReputation(FactionData, Reputation, Source, EventTag);
            }
        }
        else if (GetOwner()->GetLocalRole() == ROLE_AutonomousProxy)
        {
            Server_AddReputationFromSource(Source, EventTag);
        }
    }
    else
    {
        UE_LOG(LogNinjaFactionComponent, Verbose,
            TEXT("No actual Faction/Tier changes to perform for %s (Source: %s)."),
            *GetNameSafe(GetOwner()), *GetNameSafe(Source));
    }
}

void UNinjaFactionComponent::SetMainFaction(const UNinjaFactionDataAsset* FactionData)
{
	check(FactionData);
	if (!HasMembership(FactionData)) return;
	if (MembershipList.IsMainFaction(FactionData->FactionTag)) return;

	if (GetOwner()->HasAuthority())
	{
		MembershipList.SetMainFaction(FactionData);
	}
	else if (GetOwner()->GetLocalRole() == ROLE_AutonomousProxy)
	{
		Server_SetMainFaction(FactionData);
	}
}

void UNinjaFactionComponent::RemoveFaction(const UNinjaFactionDataAsset* FactionData)
{
    check(FactionData);
    if (!HasMembership(FactionData)) return;
	if (MembershipList.IsMainFaction(FactionData->FactionTag)) return;
    
    if (GetOwner()->HasAuthority())
    {
        MembershipList.RemoveFactionMembership(FactionData);
    }
    else if (GetOwner()->GetLocalRole() == ROLE_AutonomousProxy)
    {
        Server_RemoveFaction(FactionData);
    }
}

void UNinjaFactionComponent::ResetFactions()
{
	if (!GetOwner()->HasAuthority())
	{
		return;
	}

	MembershipList.RemoveAllMemberships();
}

bool UNinjaFactionComponent::HasMembership(const UNinjaFactionDataAsset* FactionData) const
{
    return IsValid(FactionData) && MembershipList.HasFactionMembership(FactionData->FactionTag);
}

bool UNinjaFactionComponent::GetReputationTier(const UNinjaFactionDataAsset* FactionData,
	FFactionReputationTableRow& OutReputationTier) const
{
	FFactionMembership Membership;
	if (GetFactionMembership(FactionData, Membership))
	{
		const float Reputation = Membership.Reputation;
		return GetFactionSubsystem()->GetReputationTier(Reputation, OutReputationTier);
	}

	return false;
}

void UNinjaFactionComponent::GetReputationRewards(TMap<UNinjaFactionDataAsset*, float>& OutRewards, const FGameplayTag EventTag) const
{
    if (IsValid(GetOwner()) && GetOwner()->Implements<UFactionSourceInterface>())
    {
        const TMap<UNinjaFactionDataAsset*, int32> Rewards = IFactionSourceInterface::Execute_GetReputationRewards(GetOwner(), this, EventTag);
        for (auto It(Rewards.CreateConstIterator()); It; ++It)
        {
            UNinjaFactionDataAsset* Key = It.Key();
            float Value = It.Value();

            if (OutRewards.Contains(Key))
            {
                Value += OutRewards.FindAndRemoveChecked(Key);
            }

            OutRewards.Add(Key, Value);
        }
    }
}

ETeamAttitude::Type UNinjaFactionComponent::GetAttitude(const AActor* Target) const
{
	return GetFactionSubsystem()->GetAttitude(GetOwner(), Target);
}

UNinjaFactionSubsystem* UNinjaFactionComponent::GetFactionSubsystem() const
{
    return GetWorld()->GetGameInstance()->GetSubsystem<UNinjaFactionSubsystem>();
}

bool UNinjaFactionComponent::ProcessReputationAndTier(FFactionMembership& Membership, const int32 Reputation) const
{
    const TObjectPtr<const UNinjaFactionSubsystem> FactionSubsystem = GetFactionSubsystem();
    check(IsValid(FactionSubsystem));

	int32 NewReputation = Membership.Reputation + Reputation;
	const FFactionReputationTableRow* NewReputationTier = nullptr;

	if (Membership.bIsNewMembership || !Membership.ReputationInRange(NewReputation))
	{
		FFactionReputationTableRow ReputationTierForCurrentValue;
		if (FactionSubsystem->GetReputationTier(Reputation, ReputationTierForCurrentValue))
		{
			// New reputation tier has been found and assigned to the membership.
			NewReputationTier = &ReputationTierForCurrentValue;
		}
		else
		{
			// No new tier. Ensure the current reputation is within boundaries.
			// This is also important when we are at the very first or very last values and tiers.
			NewReputation = FMath::Clamp(Reputation, Membership.MinReputation, Membership.MaxReputation);
		}
	}

    return Membership.UpdateReputation(NewReputation, NewReputationTier);
}

// -- Extension Points --------------------------------------------------------

bool UNinjaFactionComponent::IsValidSourceAndEvent(const UObject* Source, const FGameplayTag& EventTag, const bool bCheckInterface) const
{
	if (!IsValid(Source)) return false;
	if (bCheckInterface && !Source->Implements<UFactionSourceInterface>()) return false;
	if (!EventTag.IsValid() || !EventTag.MatchesTag(Tag_Factions_Event)) return false;
	return true;
}

void UNinjaFactionComponent::SynchronizeDefaultFactions_Implementation()
{
    for (FFactionMembership Membership : DefaultFactions)
    {
        static constexpr int32 NoReputationToAdd = 0;
        if (ProcessReputationAndTier(Membership, NoReputationToAdd))
        {
            MembershipList.AddFactionMembership(Membership);

            UE_LOG(LogNinjaFactionComponent, Verbose,
                TEXT("Added default Faction %s to %s on Tier %s (%d reputation)."),
                *GetNameSafe(Membership.FactionData), *GetNameSafe(GetOwner()),
                *Membership.TierName.ToString(), Membership.Reputation);
        }
    }
}

bool UNinjaFactionComponent::IsValidFactionAssignment_Implementation(const UNinjaFactionDataAsset* FactionData,
    const int32 Reputation, const UObject* Source, const FGameplayTag EventTag) const
{
	// Assignments must come from a valid source and event. The interface is optional.
	static constexpr bool bCheckInterface = false;
    if (!IsValidSourceAndEvent(Source, EventTag, bCheckInterface)) return false;
    
    // Optional validation in case the Source implements the interface.
    if (Source->Implements<UFactionSourceInterface>())
    {
        return IFactionSourceInterface::Execute_CanProvideFactionValues(Source, FactionData, Reputation, EventTag);
    }

    return true;
}

bool UNinjaFactionComponent::IsValidFactionUpdate_Implementation(const UNinjaFactionDataAsset* FactionData,
    const int32 Reputation, const UObject* Source, const FGameplayTag EventTag) const
{
	// Assignments must come from a valid source and event. The interface is optional.
	static constexpr bool bCheckInterface = false;
	if (!IsValidSourceAndEvent(Source, EventTag, bCheckInterface)) return false;
    
    // Optional validation in case the Source implements the interface.
    if (Source->Implements<UFactionSourceInterface>())
    {
        return IFactionSourceInterface::Execute_CanProvideFactionValues(Source, FactionData, Reputation, EventTag);
    }

    return true;
}

// -- Serialization -----------------------------------------------------------

FFactionManagerRecord UNinjaFactionComponent::GetFactionRecordForSerialization() const
{
	
	FFactionManagerRecord Record;
	Record.MembershipRecords = GetMembershipRecordsForSerialization();
	return Record;	
}

TArray<FFactionMembershipRecord> UNinjaFactionComponent::GetMembershipRecordsForSerialization() const
{
	TArray<FFactionMembershipRecord> Results;
	Results.Reserve(MembershipList.CountFactionMemberships());
	
	const TArray<FFactionMembership>& Entries = MembershipList.GetFactionMemberships();
	for (const FFactionMembership& Entry : Entries)
	{
		TOptional<FFactionMembershipRecord> Record = Internal_ConvertToMembershipRecord(Entry);
		if (Record.IsSet())
		{
			Results.Add(Record.GetValue());
		}
	}

	return Results;	
}

TOptional<FFactionMembershipRecord> UNinjaFactionComponent::Internal_ConvertToMembershipRecord(const FFactionMembership& Entry) const
{
	FFactionMembershipRecord Record;
	Record.Reputation = Entry.Reputation;
	Record.bIsMainFaction = Entry.bMainFaction;

	const FSoftObjectPath DataAssetPath = FSoftObjectPath(Entry.FactionData);
	Record.DataAssetPath = DataAssetPath.ToString();

	return Record;
}

void UNinjaFactionComponent::LoadFactionMemberships(const FFactionManagerRecord& FactionManagerRecord)
{
	if (!GetOwner()->HasAuthority())
	{
		UE_LOG(LogNinjaFactionComponent, Warning, TEXT("Attempt to load memberships without network authority!"));
		return;
	}

	ResetFactions();

	TArray<FSoftObjectPath> AssetsToLoad;

	for (const FFactionMembershipRecord& Record : FactionManagerRecord.MembershipRecords)
	{
		const FSoftObjectPath FactionDataPath = FSoftObjectPath(Record.DataAssetPath);
		AssetsToLoad.AddUnique(FactionDataPath);
	}

	UAssetManager* AssetManager = UAssetManager::GetIfInitialized();
	if (IsValid(AssetManager))
	{
		const FStreamableDelegate Delegate = FStreamableDelegate::CreateUObject(this, &ThisClass::HandleFactionAssetsLoaded, FactionManagerRecord);
		AssetManager->LoadAssetList(AssetsToLoad, Delegate, FStreamableManager::DefaultAsyncLoadPriority);
	}
}

void UNinjaFactionComponent::HandleFactionAssetsLoaded(FFactionManagerRecord FactionManagerRecord)
{
	for (const FFactionMembershipRecord& Record : FactionManagerRecord.MembershipRecords)
	{
		TOptional<FFactionMembership> OptionalMembership = Internal_ConvertFromMembershipRecord(Record);
		if (OptionalMembership.IsSet())
		{
			const FFactionMembership& Membership = OptionalMembership.GetValue(); 
			AddFactionFromMembership(Membership, this, Tag_Factions_Event_SaveGame);	
		}
	}
}

TOptional<FFactionMembership> UNinjaFactionComponent::Internal_ConvertFromMembershipRecord(const FFactionMembershipRecord& Record) const
{
	const FSoftObjectPath RecordPath(Record.DataAssetPath);
	const TSoftObjectPtr<UNinjaFactionDataAsset> DataAsset(RecordPath);
	if (DataAsset.IsValid())
	{
		FFactionMembership Membership;
		Membership.Reputation = Record.Reputation;
		Membership.bMainFaction = Record.bIsMainFaction;
		Membership.FactionData = DataAsset.Get();
		return Membership;
	}

	UE_LOG(LogNinjaFactionComponent, Warning, TEXT("Faction Data path %s does not point to a valid/loaded asset."), *Record.DataAssetPath);
	return TOptional<FFactionMembership>();
}

// -- Server Functions --------------------------------------------------------

void UNinjaFactionComponent::Server_AddFaction_Implementation(const UNinjaFactionDataAsset* FactionData,
    const int32 Reputation, const UObject* Source, const FGameplayTag& EventTag, const bool bMainFaction)
{
    AddFaction(FactionData, Reputation, Source, EventTag, bMainFaction);
}

bool UNinjaFactionComponent::Server_AddFaction_Validate(const UNinjaFactionDataAsset* FactionData,
    const int32 Reputation, const UObject* Source, const FGameplayTag& EventTag, const bool bMainFaction)
{
    return IsValidFactionAssignment(FactionData, Reputation, Source, EventTag);
}

void UNinjaFactionComponent::Server_AddReputation_Implementation(const UNinjaFactionDataAsset* FactionData,
    const int32 Reputation, const UObject* Source, const FGameplayTag& EventTag)
{
    AddReputation(FactionData, Reputation, Source, EventTag);
}

bool UNinjaFactionComponent::Server_AddReputation_Validate(const UNinjaFactionDataAsset* FactionData,
    const int32 Reputation, const UObject* Source, const FGameplayTag& EventTag)
{
    return IsValidFactionUpdate(FactionData, Reputation, Source, EventTag);
}

void UNinjaFactionComponent::Server_AddReputationFromSource_Implementation(const UObject* Source, const FGameplayTag& EventTag)
{
    AddReputationFromSource(Source, EventTag);
}

bool UNinjaFactionComponent::Server_AddReputationFromSource_Validate(const UObject* Source, const FGameplayTag& EventTag)
{
    return true;
}

void UNinjaFactionComponent::Server_SetMainFaction_Implementation(const UNinjaFactionDataAsset* FactionData)
{
	SetMainFaction(FactionData);
}

bool UNinjaFactionComponent::Server_SetMainFaction_Validate(const UNinjaFactionDataAsset* FactionData)
{
	return true;
}

void UNinjaFactionComponent::Server_RemoveFaction_Implementation(const UNinjaFactionDataAsset* FactionData)
{
    RemoveFaction(FactionData);
}

bool UNinjaFactionComponent::Server_RemoveFaction_Validate(const UNinjaFactionDataAsset* FactionData)
{
    return true;
}
