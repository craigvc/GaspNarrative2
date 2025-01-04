// Ninja Bear Studio Inc., all rights reserved.
#include "UI/Widgets/NinjaInventoryCommonActivatableWidget.h"

TOptional<FUIInputConfig> UNinjaInventoryCommonActivatableWidget::GetDesiredInputConfig() const
{
	return FUIInputConfig(ECommonInputMode::All, EMouseCaptureMode::CapturePermanently_IncludingInitialMouseDown);
}
