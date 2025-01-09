// Copyright Narrative Tools 2024. 

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "NarrativeSave.generated.h"

USTRUCT()
struct FNarrativeSaveComponent
{
	GENERATED_BODY()

public:

	/* Which component this is */
	UPROPERTY(SaveGame)
	FName ComponentName;

    /* Contains all 'SaveGame' marked variables of the component  */
	UPROPERTY(SaveGame)
	TArray<uint8> ByteData;

};

USTRUCT()
struct FNarrativeActorRecord
{
	GENERATED_BODY()

public:
	
	/** The GUID we use to identify what actor this was */
	UPROPERTY(SaveGame)
	FGuid ActorGUID;

	/* Identifier for which Actor this belongs to - TODO probably cant be removed isnt required */
	UPROPERTY(SaveGame)
	FName ActorName;

	/* Save transform of actor */
	UPROPERTY(SaveGame)
	FTransform Transform;

	/* Whether the actor has been destroyed. This is only relevant for actors placed in the level - dynamic actors simply have their save record removed. */
	UPROPERTY(SaveGame)
	bool bDestroyed = false;

	/* Whether the actor is net startup or was spawned dynamically.  */
	UPROPERTY(SaveGame)
	bool bNetStartup;

	/* Whether the actor wants the save system to spawn the actor back in, or whether it should let our own code do so. */
	UPROPERTY(SaveGame)
	bool bNeedsDynamicSpawn;

	/* Dynamically spawned actors need to remember their class so we can respawn the actor in when loading.  */
	UPROPERTY(SaveGame)
	TSoftClassPtr<class AActor> ActorSoftClass;

	/* Contains all saved component data */
	UPROPERTY(SaveGame)
	TArray<FNarrativeSaveComponent> SavedComponents;

    /* Contains all 'SaveGame' marked variables of the Actor */
	UPROPERTY(SaveGame)
	TArray<uint8> ByteData;

	bool IsValid() const { return !ActorName.IsNone(); };
};

USTRUCT()
struct FNarrativeSavePlayer
{
	GENERATED_BODY()

public:

	UPROPERTY()
	FNarrativeActorRecord ControllerData;

	UPROPERTY()
	FNarrativeActorRecord PawnData;

	UPROPERTY()
	FNarrativeActorRecord PlayerStateData;

	bool IsValid() const {return !PlayerStateData.ActorName.IsNone();};
};

//Versioning technique used by epic
namespace ENarrativeSaveGameVersion
{
	enum type
	{
		// Initial version
		Initial,


		// -----<new versions must be added before this line>-------------------------------------------------
		VersionPlusOne,
		LatestVersion = VersionPlusOne - 1
	};
};

USTRUCT()
struct FNarrativeSavedLevel
{
	GENERATED_BODY()

	FNarrativeSavedLevel()
	{

	};

	//The name of the map the records are for 
	UPROPERTY()
	FString LevelName;

	//This maps the GUID returned by the maps actors save interface to that actors record, so we can load it back in! 
	UPROPERTY()
	TMap<FGuid, FNarrativeActorRecord> RecordMap;

};

/**
 * Save file that holds all actors that implement the INarrativeSavableActor interface. 
 */
UCLASS()
class NARRATIVESAVESYSTEM_API UNarrativeSave : public USaveGame
{
	GENERATED_BODY()
	
public:

	UNarrativeSave()
	{
		SavedDataVersion = ENarrativeSaveGameVersion::LatestVersion;
	}

	//The name of the map we had loaded - note that the main menu loads whatever is saved in here, the subsystem doesn't use it on its end 
	UPROPERTY(BlueprintReadOnly, Category = "Narrative Save")
	FString LevelName;

	//We store each level and its records seperately. TODO implement this and phase out RecordMap and PlayerData. 
	UPROPERTY()
	TArray<FNarrativeSavedLevel> SavedLevels;

	//This maps the GUID returned by the actors save interface to that actors record, so we can load it back in! 
	UPROPERTY()
	TMap<FGuid, FNarrativeActorRecord> RecordMap;

	/*This holds specific player data. - we handle loading players seperately as they are a little complex and consist of multiple actors(player state, player controller, pawn, etc)
	We also store player data independently of level by default - this is typically how you want your save system to work - the players level, attributes, items, etc aren't tied to the level. */
	UPROPERTY()
	FNarrativeSavePlayer PlayerData;

	//Overrides the level we have loaded on the save file. This is only used by the character creator. 
	UFUNCTION(BlueprintCallable, Category = "Narrative Save")
	void OverrideLevelName(const FString& InLevelName);

protected:


	/** What LatestVersion was when the archive was saved */
	UPROPERTY()
	int32 SavedDataVersion;

	/** Overridden to allow version fixups */
	virtual void Serialize(FArchive& Ar) override;

};
