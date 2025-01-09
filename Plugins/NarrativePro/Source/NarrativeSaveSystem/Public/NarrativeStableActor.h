// Copyright Narrative Tools 2024. 

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "NarrativeStableActor.generated.h"


/**
 * Any actors implementing this interface will be stable - meaning you can reference them via a GUID which is useful because GUIDs save nicely to disk where actor references dont. 
 */
UINTERFACE(BlueprintType)
class NARRATIVESAVESYSTEM_API UNarrativeStableActor : public UInterface
{
	GENERATED_BODY()
	
};

/**
 * Any actors implementing this interface will be stable - meaning you can reference them via a GUID which is useful because GUIDs save nicely to disk where actor references dont. 
 */
class NARRATIVESAVESYSTEM_API INarrativeStableActor
{
	GENERATED_BODY()

public:

	//Get the actors stable GUID.
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Stable Actor")
	FGuid GetActorGUID() const;
	virtual FGuid GetActorGUID_Implementation() const;

};