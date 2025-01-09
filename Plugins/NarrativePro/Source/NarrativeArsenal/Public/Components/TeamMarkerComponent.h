// Copyright Narrative Tools 2024. 

#pragma once

#include "CoreMinimal.h"
#include "NavigationMarkerComponent.h"
#include "TeamMarkerComponent.generated.h"

/**
 * Navigation marker which changes shade to represent the others team attitude towards the viewer. 
 */
UCLASS()
class NARRATIVEARSENAL_API UTeamMarkerComponent : public UNavigationMarkerComponent
{
	GENERATED_BODY()
	
public: 

	UTeamMarkerComponent(const FObjectInitializer& ObjectInitializer);

	//If we're friendly the nav marker will appear this color
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Marker Setup")
	FLinearColor FriendlyColor;

	//If we're neutral the nav marker will appear this color
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Marker Setup")
	FLinearColor NeutralColor;

	//If we're hostile the nav marker will appear this color
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Marker Setup")
	FLinearColor HostileColor;

	virtual FLinearColor GetMarkerColor_Implementation(class APlayerController* Viewer, const FGameplayTag& NavigatorType) const;

};
