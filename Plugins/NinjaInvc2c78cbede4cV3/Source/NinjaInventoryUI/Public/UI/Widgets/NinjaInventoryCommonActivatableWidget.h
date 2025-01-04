// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "NinjaInventoryCommonActivatableWidget.generated.h"

/**
 * Base activatable widget with basic Common UI elements.
 */
UCLASS(Abstract)
class NINJAINVENTORYUI_API UNinjaInventoryCommonActivatableWidget : public UCommonActivatableWidget
{
	
	GENERATED_BODY()

public:

	// -- Begin Widget implementation
	virtual TOptional<FUIInputConfig> GetDesiredInputConfig() const override;
	// -- End Widget implementation

};
