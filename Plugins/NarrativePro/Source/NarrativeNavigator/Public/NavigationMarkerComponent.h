// Copyright Narrative Tools 2022. 

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include <GameplayTagContainer.h>
#include "NavigationMarkerComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnRefreshRequired);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnSelected, class UNarrativeNavigationComponent*, Selector, class APlayerController*, SelectorOwner);

USTRUCT(BlueprintType)
struct FZoneDrawData
{

	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Map Points")
	TArray<FVector> Points;

};

USTRUCT(BlueprintType)
struct FNavigationMarkerSettings
{

	GENERATED_BODY()

	FNavigationMarkerSettings()
	{
		bOverride_LocationDisplayName = false;
		bOverride_LocationIcon = false;
		bOverride_IconTint = false;
		bOverride_IconSize = false;
		bOverride_IconOffset = false;
		bOverride_bShowActorRotation = false;

		LocationDisplayName = NSLOCTEXT("NavigationMarkerSettings", "NavigatorLocationDisplayName", "Location Marker");
		LocationIcon = nullptr;
		IconTint = FLinearColor(1.f, 1.f, 1.f);
		IconSize = FVector2D(20.f, 20.f);
		IconOffset = FVector::ZeroVector;
		bShowActorRotation = false;
	};

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Overrides, meta=(PinHiddenByDefault, InlineEditConditionToggle))
	uint8 bOverride_LocationDisplayName:1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Overrides, meta=(PinHiddenByDefault, InlineEditConditionToggle))
	uint8 bOverride_LocationIcon : 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Overrides, meta=(PinHiddenByDefault, InlineEditConditionToggle))
	uint8 bOverride_IconTint : 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Overrides, meta=(PinHiddenByDefault, InlineEditConditionToggle))
	uint8 bOverride_IconSize : 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Overrides, meta=(PinHiddenByDefault, InlineEditConditionToggle))
	uint8 bOverride_IconOffset : 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Overrides, meta=(PinHiddenByDefault, InlineEditConditionToggle))
	uint8 bOverride_bShowActorRotation : 1;

	//The display name to use for this location 
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Marker Setup", meta = (EditCondition="bOverride_LocationDisplayName"))
	FText LocationDisplayName;

	//The icon to use for this location 
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Marker Setup", meta = (EditCondition="bOverride_LocationIcon"))
	TObjectPtr<class UTexture2D> LocationIcon;

	//Tint for the icon
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Marker Setup", meta = (EditCondition = "bOverride_IconTint"))
	FLinearColor IconTint;

	//The icons size on the compass, map, screen marker, whereever the icon is being used 
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Marker Setup", meta = (EditCondition = "bOverride_IconSize"))
	FVector2D IconSize;

	//Add an offset in the actors space - more efficient than making markers scene components with a transform 
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Marker Setup", meta = (EditCondition = "bOverride_IconOffset"))
	FVector IconOffset;

	//Whether this markers rotation should be shown on the map, for any navigator widgets that use this feature
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Marker Setup", meta = (EditCondition = "bOverride_bShowActorRotation"))
	bool bShowActorRotation;
};

/**Add this component to any actor you want to show up on Narrative Navigator UI like the compass, world map, etc. */
UCLASS( ClassGroup=(Narrative), Blueprintable, DisplayName = "Navigation Marker", meta=(BlueprintSpawnableComponent) )
class NARRATIVENAVIGATOR_API UNavigationMarkerComponent : public UActorComponent
{
	GENERATED_BODY()

protected:

	// Sets default values for this component's properties
	UNavigationMarkerComponent(const FObjectInitializer& ObjectInitializer);

	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	
	virtual void RegisterMarker();
	virtual void RemoveMarker();

public:

	virtual void Activate(bool bReset) override;
	virtual void Deactivate() override;
	virtual void DestroyComponent(bool bPromoteChildren) override;

	//The properties the navigation marker should use 
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Marker Setup")
	FNavigationMarkerSettings DefaultMarkerSettings;

	//If the world map needs any settings changed from the defaults, override them in here! 
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Marker Setup", meta = (DisplayName="Override Settings (World Map)"))
	FNavigationMarkerSettings WorldMapOverrideSettings;

	//If the minimap needs any settings changed from the defaults, override them in here! 
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Marker Setup", meta = (DisplayName="Override Settings (Minimap)"))
	FNavigationMarkerSettings MinimapOverrideSettings;

	//If the compass needs any settings changed from the defaults, override them in here! 
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Marker Setup", meta = (DisplayName="Override Settings (Compass)"))
	FNavigationMarkerSettings CompassOverrideSettings;

	//If the screen space marker need any settings changed from the defaults, override them in here! 
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Marker Setup", meta = (DisplayName="Override Settings (Screen Space)"))
	FNavigationMarkerSettings ScreenspaceOverrideSettings;

protected:

	//Text the marker should show as its action text in the world map when hovered
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Marker Setup")
	FText DefaultMarkerActionText;

	//Whether this marker should always be on the edge of the map, rather than going beyond the maps border 
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Marker Setup")
	bool bPinToMapEdge;

	//Compass only - The distance at which the compass begins to fade the marker out
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Marker Setup")
	float MarkerStartFadeOutDistance;

	//Compass - only The distance at which we the compass begins to fade the marker in
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Marker Setup")
	float MarkerStartFadeInDistance;

	//What navigation widgets will this navigation marker show up on?
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Marker Setup", meta = (Categories = "Navigator.NavigatorTypes"))
	FGameplayTagContainer MarkerDomain;

	//Any values in here will be drawn by the map onto the UI. Really useful for zones like hostile zones, quest zones etc.
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Marker Setup", AdvancedDisplay)
	//FZoneDrawData Zone;

public:

	//Grab the settings for the nav marker and any overrides - this is just called once on init for marker icons
	UFUNCTION(BlueprintPure, Category = "Marker")
	FNavigationMarkerSettings GetMarkerSettings(UPARAM(meta = (Categories = "Navigator.NavigatorTypes")) const FGameplayTag& NavigatorType) const ;

	//Call this function whenever you've changed some settings on the marker! It will inform the UI widgets they need to refresh themselves. 
	UFUNCTION(BlueprintCallable, Category = "Marker")
	void RefreshMarker();

	UPROPERTY(BlueprintAssignable, Category = "Marker")
	FOnRefreshRequired OnRefreshRequired;

	//Called when the marker is selected in the world map 
	UPROPERTY(BlueprintAssignable, Category = "Marker")
	FOnSelected OnSelected;
	
	//Text for what happens when we click on the marker 
	UFUNCTION(BlueprintNativeEvent, BlueprintPure, Category = "Marker")
	FText GetMarkerActionText(class UNarrativeNavigationComponent* Selector, class APlayerController* SelectorOwner) const;
	virtual FText GetMarkerActionText_Implementation(class UNarrativeNavigationComponent* Selector, class APlayerController* SelectorOwner) const;

	//Display text for the marker, override if you need dynamic 
	UFUNCTION(BlueprintNativeEvent, BlueprintPure, Category = "Marker")
	FText GetMarkerDisplayText(class APlayerController* Viewer, UPARAM(meta = (Categories = "Navigator.NavigatorTypes")) const FGameplayTag& NavigatorType) const;
	virtual FText GetMarkerDisplayText_Implementation(class APlayerController* Viewer, UPARAM(meta = (Categories = "Navigator.NavigatorTypes")) const FGameplayTag& NavigatorType) const;

	//Display color for the marker, override if you need dynamic 
	UFUNCTION(BlueprintNativeEvent, BlueprintPure, Category = "Marker")
	FLinearColor GetMarkerColor(class APlayerController* Viewer, UPARAM(meta = (Categories = "Navigator.NavigatorTypes")) const FGameplayTag& NavigatorType) const;
	virtual FLinearColor GetMarkerColor_Implementation(class APlayerController* Viewer, UPARAM(meta = (Categories = "Navigator.NavigatorTypes")) const FGameplayTag& NavigatorType) const;

	//Handle what the marker should be clickable or hoverable, or if it is just an icon with no interaction
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Marker")
	bool CanInteract(class UNarrativeNavigationComponent* Selector, class APlayerController* SelectorOwner) const;
	virtual bool CanInteract_Implementation(class UNarrativeNavigationComponent* Selector, class APlayerController* SelectorOwner) const;

	//Handle what the marker should do when clicked in the map
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Marker")
	void OnSelect(class UNarrativeNavigationComponent* Selector, class APlayerController* SelectorOwner);
	virtual void OnSelect_Implementation(class UNarrativeNavigationComponent* Selector, class APlayerController* SelectorOwner);

	UFUNCTION(BlueprintCallable, Category = "Marker")
	void SetDefaultDomains(UPARAM(meta = (Categories = "Navigator.NavigatorTypes")) const FGameplayTagContainer& NewMarkerDomain);

	// Check if this marker should be shown in the given location 
	UFUNCTION(BlueprintCallable, Category = "Marker")
	void SetDomains(UPARAM(meta = (Categories = "Navigator.NavigatorTypes")) const FGameplayTagContainer& NewMarkerDomain);

	// addd domains 
	UFUNCTION(BlueprintCallable, Category = "Marker")
	void AddDomains(UPARAM(meta = (Categories = "Navigator.NavigatorTypes")) const FGameplayTagContainer& NewMarkerDomains);
	
	//remove domains 
	UFUNCTION(BlueprintCallable, Category = "Marker")
	void RemoveDomains(UPARAM(meta = (Categories = "Navigator.NavigatorTypes")) const FGameplayTagContainer& RemoveDomains);
};
