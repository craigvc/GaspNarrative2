// Copyright Narrative Tools 2024. 

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "AbilitySystemInterface.h"
#include "Teams/NarrativeTeamAgentInterface.h"
#include "Tales/NarrativeComponent.h"
#include "NavigationSubsystem.h"
#include "NarrativePlayerController.generated.h"

/**
 * 
 */
UCLASS()
class NARRATIVEARSENAL_API ANarrativePlayerController : public APlayerController, public IAbilitySystemInterface, public INarrativeTeamAgentInterface
{
	GENERATED_BODY()
	
public:

	ANarrativePlayerController(const class FObjectInitializer& ObjectInitializer);

	//Interfaces 
	class UAbilitySystemComponent* GetAbilitySystemComponent() const override;
	void SetGenericTeamId(const FGenericTeamId& TeamID) override;
	FGenericTeamId GetGenericTeamId() const override;
	ETeamAttitude::Type GetTeamAttitudeTowards(const AActor& Other) const override;

	//POI marker calls this to perform fast travelling, which we implement in BP 
	UFUNCTION(BlueprintImplementableEvent, Category = "Narrative|Fast Travel")
	void FastTravelToPOI(const FPointOfInterestLocation& POI);

protected:

	// Server only
	virtual void OnPossess(APawn* InPawn) override;
	virtual void OnRep_PlayerState() override;
	virtual void SetupInputComponent() override;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Narrative|Interaction")
	TObjectPtr<class UNarrativeInteractionComponent> InteractionComponent;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Narrative|Interaction")
	TObjectPtr<class UNarrativeComponent> TalesComponent;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Narrative|Navigation")
	TObjectPtr<class UNarrativeNavigationComponent> NavigationComponent;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Narrative|Navigation")
	TObjectPtr<class UNarrativeComponent> NarrativeComponent;

};
