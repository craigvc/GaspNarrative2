// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "GameFeatureAction.h"
#include "GameFeaturesSubsystem.h"
#include "Components/GameFrameworkComponentManager.h"
#include "Types/FFactionMembership.h"

#include "GameFeatureAction_AddFactions.generated.h"

USTRUCT(BlueprintType)
struct FFactionFeatureEntry
{
	
	GENERATED_BODY()

	/** Base actor that will receive the faction. */
	UPROPERTY(EditAnywhere, Category = "Faction Setup")
	TSoftClassPtr<AActor> ActorClass;

	/** Factions assigned to the actor. */
	UPROPERTY(EditAnywhere, Category = "Faction Setup", meta = (TitleProperty = "FactionData"))
	TArray<FFactionMembership> Memberships;
	
};

/**
 * Adds Factions to a selected Faction Members.
 *
 * Make sure to add the component first, either via code or the "Add Component" action.
 */
UCLASS(MinimalAPI, meta = (DisplayName = "Add Factions"))
class UGameFeatureAction_AddFactions : public UGameFeatureAction
{
	
	GENERATED_BODY()

	struct FPerContextData
	{
		TMap<AActor*, TArray<FFactionMembership>> ActiveExtensions;
		TArray<TSharedPtr<FComponentRequestHandle>> ComponentRequests;
	};
	
public:

	// -- Begin GameFeatureAction implementation
	virtual void OnGameFeatureActivating(FGameFeatureActivatingContext& Context) override;
	virtual void OnGameFeatureDeactivating(FGameFeatureDeactivatingContext& Context) override;
	// -- End GameFeatureAction implementation	

protected:

	/** List of items being granted to an actor. */
	UPROPERTY(EditAnywhere, Category = "Faction Setup", meta=(TitleProperty = "ActorClass", ShowOnlyInnerProperties))
	TArray<FFactionFeatureEntry> FactionSetup;

	void HandleGameInstanceStart(UGameInstance* GameInstance, FGameFeatureStateChangeContext ChangeContext);
	void AddToWorld(const FWorldContext& WorldContext, const FGameFeatureStateChangeContext& ChangeContext);
	void HandleActorExtension(AActor* Actor, FName EventName, int32 EntryIndex, FGameFeatureStateChangeContext ChangeContext);
	static void GrantMemberships(AActor* Actor, const FFactionFeatureEntry& Entry, FPerContextData& ActiveData);
	static void RevokeMemberships(const AActor* Actor, FPerContextData& ActiveData);
	
private:

	/** All handles created for features applied by this task. */
	TMap<FGameFeatureStateChangeContext, FDelegateHandle> GameInstanceStartHandles;	

	/** Specific data added to each context. */
	TMap<FGameFeatureStateChangeContext, FPerContextData> ContextData;
	
};
