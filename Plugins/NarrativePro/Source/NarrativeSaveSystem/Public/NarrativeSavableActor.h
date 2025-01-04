// Copyright Narrative Tools 2024. 

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "NarrativeSavableActor.generated.h"

/**
 * Any actors implementing this interface will be captured by the Narrative Save subsystem
 */
UINTERFACE(BlueprintType)
class NARRATIVESAVESYSTEM_API UNarrativeSavableActor : public UInterface
{
	GENERATED_BODY()
	
};

/**
 * Any actors implementing this interface will be capture by the Narrative Save subsystem
 */
class NARRATIVESAVESYSTEM_API INarrativeSavableActor
{
	GENERATED_BODY()

public:
	
	//Tell the actor it is about to be saved, and needs to populate all its save data 
	UFUNCTION(BlueprintNativeEvent)
	void PrepareForSave();
	virtual void PrepareForSave_Implementation();

	//Tell the actor it has been loaded in from a save. 
	UFUNCTION(BlueprintNativeEvent)
	void Load();
	virtual void Load_Implementation();

	//Allows us to define whether we want the save system to auto-respawn a dynamic actor, or whether we'll do it ourselves manually. 
	//At the moment we just have this feature for NPCs - they should't auto-respawn if part of a settlement, as the settlement spawns them instead. 
	UFUNCTION(BlueprintNativeEvent)
	bool ShouldRespawn() const;
	virtual bool ShouldRespawn_Implementation() const;

	//Tell the actor it has been loaded in from a save. 
	UFUNCTION(BlueprintNativeEvent)
	FGuid GetActorGUID() const;
	virtual FGuid GetActorGUID_Implementation() const;

	//Used for dynamic actors to set the actors GUID to the one the save system got from the actors record - that way the save system will correctly save this actor again
	UFUNCTION(BlueprintNativeEvent)
	void SetActorGUID(const FGuid& SavedGUID);
	virtual void SetActorGUID_Implementation(const FGuid& SavedGUID);

};