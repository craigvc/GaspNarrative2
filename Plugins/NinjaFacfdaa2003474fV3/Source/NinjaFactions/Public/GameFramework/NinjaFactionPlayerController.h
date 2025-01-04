// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "GenericTeamAgentInterface.h"
#include "GameFramework/PlayerController.h"
#include "NinjaFactionPlayerController.generated.h"

class APawn;
class UNinjaFactionComponent;

/**
 * Base Player Controller provided by the Ninja Faction System.
 *
 * It handles the integration with the Faction Component/Subsystem, connecting these elements
 * to Unreal Engine's Team Resolution Framework/Perception System.
 *
 * Using this controller is not mandatory. You are free to implement equivalent functionality
 * in your own Player Controller, in any other way you see fit, as this particular controller
 * is not directly used by the Faction Framework in any way.
 */
UCLASS()
class NINJAFACTIONS_API ANinjaFactionPlayerController : public APlayerController, public IGenericTeamAgentInterface
{
	
	GENERATED_BODY()

public:

	ANinjaFactionPlayerController();

	// -- Begin Player Controller implementation
	virtual void OnPossess(APawn* InPawn) override;
	virtual void OnUnPossess() override;
	virtual void OnRep_Pawn() override;
	// -- End Player Controller implementation

	// -- Begin Generic Team Agent implementation
	virtual FGenericTeamId GetGenericTeamId() const override;
	// -- End Generic Team Agent implementation

	protected:

	/** Cached faction component. */
	UPROPERTY()
	TObjectPtr<UNinjaFactionComponent> FactionComponent;
	
};
