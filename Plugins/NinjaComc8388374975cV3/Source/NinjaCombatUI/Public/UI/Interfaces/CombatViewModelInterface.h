// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "CombatViewModelInterface.generated.h"

class APlayerController;

UINTERFACE(MinimalAPI)
class UCombatViewModelInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * A View Model that is aware of the widget's owner.
 */
class NINJACOMBATUI_API ICombatViewModelInterface
{
	GENERATED_BODY()

public:

	/**
	 * Sets the widget's owner to the View Model, which may be different from the Combat Owner.
	 * As per the Widget's API, this is usually the Controller.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Combat View Model Interface")
	void SetWidgetOwner(APlayerController* WidgetOwner);

	/**
	 * Clears the widget owner, allowing any cleanup (i.e. unbinding from delegates).
	 * This is usually invoked when the widget is being removed/destroyed.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Combat View Model Interface")
	void ClearWidgetOwner();
	
};