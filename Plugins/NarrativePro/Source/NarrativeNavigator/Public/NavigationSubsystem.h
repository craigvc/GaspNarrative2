// Copyright Narrative Tools 2024. 

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include <GameplayTagContainer.h>
#include "NavigationSubsystem.generated.h"

USTRUCT(BlueprintType)
struct FPointOfInterestLocation
{

	GENERATED_BODY()

	FPointOfInterestLocation() 
	{
		POIDisplayName = NSLOCTEXT("PointOfInterestLocation", "POIDisplayName", "Point of Interest");
		POILocation = FVector();
	};

	//The POI Tag ID 
	UPROPERTY(BlueprintReadWrite, Category = "Point of Interest", meta = (Categories = "Navigator.PointOfInterest"))
	FGameplayTag POITag;

	//Optional actor that the POI refers to - if the actor moves around, the location will match the actors position. 
	UPROPERTY(BlueprintReadWrite, Category = "Point of Interest")
	TWeakObjectPtr<AActor> POIActor;

	//Optional POI marker that the POI was generated from - we cache this here so we can refresh the marker when discovered
	UPROPERTY(BlueprintReadWrite, Category = "Point of Interest")
	TWeakObjectPtr<class UNavigationMarkerComponent> POIMarker;

	//Fixed location the POI can refer to - useful for POIs that don't move around. 
	UPROPERTY(BlueprintReadWrite, Category = "Point of Interest")
	FVector POILocation;

	//The display name the POI should show, for example if we discover a POI. 
	UPROPERTY(BlueprintReadWrite, Category = "Point of Interest")
	FText POIDisplayName;

	//Return the location of the POI
	FVector GetPOILocation() const;

};

/**
 * Subsystem for navigator, at the moment just used for caching POIs. 
 */
UCLASS()
class NARRATIVENAVIGATOR_API UNavigationSubsystem : public UWorldSubsystem
{
	GENERATED_BODY()
	
	UNavigationSubsystem();

	virtual void OnWorldBeginPlay(UWorld& InWorld) override;

public:

	//Add an POI using a fixed location that doesn't change position 
	UFUNCTION(BlueprintCallable, Category = "Point of Interest")
	bool AddPointOfInterest_Vector(UPARAM(meta = (Categories = "Navigator.PointOfInterest"))FGameplayTag POITag, FText POIDisplayName, const FVector& POILocation);

	//Add an actor POI. POI will return actors location as actor moves
	UFUNCTION(BlueprintCallable, Category = "Point of Interest")
	bool AddPointOfInterest_Actor(UPARAM(meta = (Categories = "Navigator.PointOfInterest"))FGameplayTag POITag, FText POIDisplayName, AActor* POIActor);

	//POINavigationMarkers automatically register their owners using this function. 
	bool AddPointOfInterest_FromPOIMarker(class UPOINavigationMarker* Marker);

	//Return a POI that has previously been cached. 
	UFUNCTION(BlueprintCallable, Category = "Point of Interest")
	bool GetPointOfInterest(FPointOfInterestLocation& OutPointOfInterest, UPARAM(meta = (Categories = "Navigator.PointOfInterest"))const FGameplayTag& POITag);

	//Find POI that is nearest to the given location
	UFUNCTION(BlueprintPure, Category = "Point of Interest")
	bool GetNearestPOIToPoint(FPointOfInterestLocation& OutPointOfInterest, UPARAM(meta = (Categories = "Navigator.PointOfInterest"))const FVector& TestLocation);

	//We cache POIs using tags for efficient lookups 
	UPROPERTY()
	TMap<FGameplayTag, FPointOfInterestLocation> PointsOfInterest;

};
