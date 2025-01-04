// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "GameplayEffectTypes.h"
#include "Components/WidgetComponent.h"
#include "NinjaCombatWidgetComponent.generated.h"

/**
 * Widget Component that will properly set the owner for widgets implementing the proper interface.
 */
UCLASS(Blueprintable, Category = "Combat", meta=(BlueprintSpawnableComponent))
class NINJACOMBATUI_API UNinjaCombatWidgetComponent : public UWidgetComponent
{
	
	GENERATED_BODY()

public:

	UNinjaCombatWidgetComponent();

	// -- Begin Widget Component implementation
	virtual void InitWidget() override;
	// -- End Widget Component implementation

	/**
	 * Handles a Gameplay Cue. Useful for reacting to damage, such as displaying a health bar.
	 *
	 * You can call this from your own Damage Handling pipeline, but it's recommended to use
	 * the provided Damage Handlers provided by the system.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Combat|Widget Component")
	virtual void HandleGameplayCue(const FGameplayCueParameters& CueParameters) const;

protected:

	/**
	 * Sets the owner as the combat target for the current widget.
	 */
	UFUNCTION()
	void SetCombatTarget();
	
};
