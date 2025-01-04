// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "Data/NinjaFactionDataAsset.h"
#include "Types/FFactionMembership.h"
#include "NinjaFactionAIController.generated.h"

class APawn;
class UNinjaFactionComponent;

/**
 * Base AI Controller provided by the Ninja Faction System.
 *
 * It handles the integration with the Faction Component/Subsystem, connecting these elements
 * to Unreal Engine's Team Resolution Framework/Perception System.
 *
 * Using this controller is not mandatory. You are free to implement equivalent functionality
 * in your own AI Controller, in any other way you see fit, as this particular controller is
 * not directly used by the Faction Framework in any way.
 */
UCLASS()
class NINJAFACTIONS_API ANinjaFactionAIController : public AAIController
{
	
	GENERATED_BODY()

public:
	
	ANinjaFactionAIController();
	
	// -- Begin AI Controller implementation
	virtual void BeginPlay() override;
	virtual void OnPossess(APawn* InPawn) override;
	virtual void OnUnPossess() override;
	virtual FGenericTeamId GetGenericTeamId() const override;
	virtual ETeamAttitude::Type GetTeamAttitudeTowards(const AActor& Other) const override;
	// -- End AI Controller implementation

protected:

	/** Team ID retrieved from the Main Faction. */
	FGenericTeamId CachedTeamId;
	
	/** Cached faction component. */
	UPROPERTY()
	TObjectPtr<UNinjaFactionComponent> FactionComponent;

	/**
	 * Initializes the Cached Team ID with the default Team.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Factions|Faction AI Controller")
	void InitializeDefaultTeam();

	/**
	 * Requests the Perception System to update the team for this Controller.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Factions|Faction AI Controller")
	void RefreshPerceptionSystem();
	
	/**
	 * Invoked when a faction was added to this controller's pawn.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Faction AI Controller")
	void OnFactionAdded(const FFactionMembership& FactionMembership);
	
};
