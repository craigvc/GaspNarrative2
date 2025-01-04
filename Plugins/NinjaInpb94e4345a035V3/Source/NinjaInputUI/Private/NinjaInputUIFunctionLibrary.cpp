// Ninja Bear Studio Inc., all rights reserved.
#include "NinjaInputUIFunctionLibrary.h"

#include "Engine/LocalPlayer.h"
#include "GameFramework/PlayerController.h"
#include "Input/CommonUIActionRouterBase.h"

void UNinjaInputUIFunctionLibrary::SetInputMode(APlayerController* PlayerController, const ECommonInputMode InputMode,
	const EMouseCaptureMode MouseCaptureMode, const bool bShowMouseCursor)
{
	if (!IsValid(PlayerController))
	{
		return;
	}

	const ULocalPlayer* LocalPlayer = PlayerController->GetLocalPlayer();
	if (!LocalPlayer)
	{
		return;
	}

	UCommonUIActionRouterBase* ActionRouter = LocalPlayer->GetSubsystem<UCommonUIActionRouterBase>();
	if (!ActionRouter)
	{
		return;
	}

	FUIInputConfig NewInputConfig;
	if (bShowMouseCursor)
	{
		constexpr bool bHideCursorDuringViewportCapture = false;
		NewInputConfig = FUIInputConfig(InputMode, MouseCaptureMode, bHideCursorDuringViewportCapture);
	}
	else
	{
		constexpr bool bHideCursorDuringViewportCapture = true;
		NewInputConfig = FUIInputConfig(InputMode, MouseCaptureMode, bHideCursorDuringViewportCapture);
	}

	PlayerController->SetShowMouseCursor(bShowMouseCursor);
	ActionRouter->SetActiveUIInputConfig(NewInputConfig);	
}
