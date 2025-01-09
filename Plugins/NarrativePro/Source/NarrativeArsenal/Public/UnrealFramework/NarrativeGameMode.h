// Copyright Narrative Tools 2024. 

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Character/PlayerDefinition.h"
#include "NarrativeGameMode.generated.h"

/**
 * Default Game State class for Narrative pro. Subclass this if you want your own game state in a Narrative Pro project. 
 */
UCLASS()
class NARRATIVEARSENAL_API ANarrativeGameMode : public AGameModeBase
{
	GENERATED_BODY()
	
protected:

	ANarrativeGameMode();

	virtual APawn* SpawnDefaultPawnAtTransform_Implementation(AController* NewPlayer, const FTransform& SpawnTransform) override;

	/** Returns default player definition class for a controller joining the game. */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category=Classes)
	UPlayerDefinition* GetPlayerDefinitionForController(AController* InController);

	/** By default, Narrative assigns each player a definition using this list for each joining player. If you need different functionality, simply override GetPlayerDefinitionForController */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Classes)
	TArray<TObjectPtr<UPlayerDefinition>> PlayerDefinitions;

};
