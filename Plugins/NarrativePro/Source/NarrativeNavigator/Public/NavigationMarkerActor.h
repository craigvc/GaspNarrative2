// Copyright Narrative Tools 2024. 

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NavigationMarkerActor.generated.h"

/**Just an empty actor with a navigation marker on it. */
UCLASS()
class NARRATIVENAVIGATOR_API ANavigationMarkerActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ANavigationMarkerActor();

	UFUNCTION(BlueprintPure, Category = "Narrative|Getters/Setters")
	FORCEINLINE class UNavigationMarkerComponent* GetMarkerComponent() const { return MarkerComponent;};

protected:

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Narrative|Components")
	TObjectPtr<class USceneComponent> SceneRoot;

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Narrative|Components")
	TObjectPtr<class UNavigationMarkerComponent> MarkerComponent;
};
