// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "GenericTeamAgentInterface.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "NinjaFactionFunctionLibrary.generated.h"

class UNinjaFactionDataAsset;
class UNinjaFactionComponent;

UCLASS(DisplayName = "Faction Function Library")
class NINJAFACTIONS_API UNinjaFactionFunctionLibrary : public UBlueprintFunctionLibrary
{
    
    GENERATED_BODY()

public:

    /**
     * Retrieves the Faction Component 
     * 
     * @param Member    Actor implementing the Faction Member interface.
     * @return          The component assigned to the actor. May be null.
     */
    UFUNCTION(BlueprintCallable, Category = "Ninja Factions", meta = (ReturnDisplayName = "Faction Component"))
    static UNinjaFactionComponent* GetFactionComponent(const AActor* Member);

    /**
     * Provides the Main Faction assigned to a member.
     *
     * @param Member    Actor implementing the Faction Member interface.
     * @return          The Main Faction assigned to the actor. May be null.
     */
    UFUNCTION(BlueprintCallable, Category = "Ninja Factions", meta = (ReturnDisplayName = "Faction Data"))
    static UNinjaFactionDataAsset* GetMainFaction(const AActor* Member);

    /**
     * Provides the Main Team ID from a provided Member Component.
     *
     * Used to simplify the retrieval of Team IDs from components that were previously cached.
     * 
     * @param FactionComponent	Faction Member Component used to retrieve the main team. 
     * @return					The Team ID from the Member Component or the default one from Settings.
     */
    UFUNCTION(BlueprintCallable, Category = "Ninja Factions", meta = (DisplayName = "Get Main Team ID", ReturnDisplayName = "Team ID"))
	static uint8 GetMainTeamId(const UNinjaFactionComponent* FactionComponent);

	/**
	 * Determines the attitude between two actors.
	 * 
	 * @param Source    Source actor from which the faction test is done. Must be a valid faction member.
	 * @param Target    Target actor to which the faction test is done against. Must be a valid faction member.
	 * @param Attitude	Output parameter receiving the resolved attitude.
	 * @return          True if the attitude was resolved. False otherwise.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Factions", meta = (ReturnDisplayName = "Attitude Solved?"))
	static bool GetAttitude(const AActor* Source, const AActor* Target, TEnumAsByte<ETeamAttitude::Type>& Attitude);

protected:

	static UNinjaFactionComponent* GetFactionComponent_Internal(const AActor* PawnOrController);
	
};
