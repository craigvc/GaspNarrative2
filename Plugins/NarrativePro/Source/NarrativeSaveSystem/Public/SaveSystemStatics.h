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
	
public:

	//Sets the in guid to a valid guid, but only if it hasn't already been generated before, useful for in constructors where this may get called multiple times 
	UFUNCTION(BlueprintCallable, Category = "Narrative Save System")
	static void CreateSaveGuid(UPARAM(ref) FGuid& OutGuid);

	//Load a single actor. 
		/** Update a single actor so its state matches that of the saved record for that actor. */
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "Saving")
	static bool LoadSingleActor(class AActor* Actor);
	
	/** Update a single actor so its state matches that of the saved record for that actor. 
	
	@param bDontRespawn tells the save system that this actor should not automatically be respawned by the save system, we need to do it manually.*/
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "Saving")
	static bool SaveSingleActor(class AActor* Actor);

	/* Remove a single actor from the save file */
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "Saving")
	static bool RemoveSingleActor(class AActor* Actor);

};
