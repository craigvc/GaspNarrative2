// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "FFactionSerialization.h"
#include "GameFramework/SaveGame.h"
#include "NinjaFactionSaveGame.generated.h"

class UNinjaFactionComponent;

/**
 * Save Game representation for the Faction Manager.
 */
UCLASS()
class NINJAFACTIONS_API UNinjaFactionSaveGame : public USaveGame
{
	
	GENERATED_BODY()

public:
	
	/**
	 * Retrieves the Faction Manager's data and saves it. 
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Faction|Save Game")
	virtual void SaveFactions(UNinjaFactionComponent* FactionComponent);

	/**
	 * Loads a saved game into a Faction Manager.
	 * 
	 * If the target faction manager is already initialized, it might reset it and override
	 * any current data with the one obtained from the saved game.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Faction|Save Game")
	virtual void LoadFactions(UNinjaFactionComponent* FactionComponent);

protected:

	UPROPERTY()
	FFactionManagerRecord FactionManagerRecord;
	
};
