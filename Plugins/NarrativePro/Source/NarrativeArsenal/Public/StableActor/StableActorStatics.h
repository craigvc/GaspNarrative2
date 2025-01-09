// Copyright Narrative Tools 2024. 

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "StableActorStatics.generated.h"

/**
 * Functions that simply working with FStableActors. 
 */
UCLASS()
class NARRATIVEARSENAL_API UStableActorStatics : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:

	//Create a stable actor from an actor reference 
	UFUNCTION(BlueprintPure, Category = "Stable Actor")
	static FStableActor MakeStableActor(AActor* Actor);

	//Create a stable actor from an actor reference 
	UFUNCTION(BlueprintPure, Category = "Stable Actor", meta = (WorldContext = "WorldContextObject"))
	static FStableActor MakeStableActorFromGUID(const UObject* WorldContextObject, const FGuid& StableActorGuid);

	//Create a stable actor from an actor reference 
	UFUNCTION(BlueprintPure, Category = "Stable Actor", meta = (WorldContext = "WorldContextObject"))
	static class AActor* GetStableActor(const UObject* WorldContextObject, const FStableActor& StableActor);
};
