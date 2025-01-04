// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "CombatWidgetInterface.generated.h"

UINTERFACE(MinimalAPI)
class UCombatWidgetInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * A widget that is aware of the owner of the Component that hosts it.
 */
class NINJACOMBATUI_API ICombatWidgetInterface
{
	GENERATED_BODY()

public:

	/**
	 * Allows this widget to react to a certain Gameplay Cue.
	 *
	 * This is an optional implementation, yet useful to widgets that must react to certain events
	 * such as damage that has been received by the owning Combat Actor.
	 * 
	 * @param CueParameters
	 *		Information about the Gameplay Cue being handled.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Combat Widget Interface")
	void HandleGameplayCue(const FGameplayCueParameters& CueParameters);
	virtual void HandleGameplayCue_Implementation(const FGameplayCueParameters& CueParameters) { }
	
};