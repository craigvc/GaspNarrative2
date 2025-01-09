// Copyright Narrative Tools 2024. 

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include <GameFramework/Actor.h>
#include "StableActor.generated.h"

/**
 * Special type that can be used like any old actor reference, but persists through play sessions as it also caches the actors GUID. 
 * Only works with actors that implement IStableActor and return a GUID via IStableActor.GetGUID()
 */
USTRUCT(BlueprintType)
struct NARRATIVEARSENAL_API FStableActor
{
	GENERATED_BODY()
	
public: 

	FStableActor(){};
	FStableActor(const FGuid& InStableActorGUID) : StableActorGUID(InStableActorGUID){};
	FStableActor(const FGuid& InStableActorGUID, class AActor* InActor) : StableActorGUID(InStableActorGUID), StableActorRef(InActor){};

	AActor* GetActor() const;
	FGuid GetStableGUID() const { return StableActorGUID;}

protected:

	UPROPERTY(EditAnywhere, Category = "Stable Actor")
	FGuid StableActorGUID;

	TWeakObjectPtr<class AActor> StableActorRef; 
};
