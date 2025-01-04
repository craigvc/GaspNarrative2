// Copyright Narrative Tools 2024. 

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SaveSystemStatics.generated.h"

/**
 * 
 */
UCLASS()
class NARRATIVESAVESYSTEM_API USaveSystemStatics : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
	//Sets the in guid to a valid guid, but only if it hasn't already been generated before, useful for in constructors where this may get called multiple times 
	UFUNCTION(BlueprintCallable, Category = "Narrative Save System")
	static void CreateSaveGuid(UPARAM(ref) FGuid& OutGuid);

};
