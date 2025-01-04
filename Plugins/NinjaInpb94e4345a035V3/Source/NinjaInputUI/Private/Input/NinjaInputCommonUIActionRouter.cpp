// Ninja Bear Studio Inc., all rights reserved.
#include "Input/NinjaInputCommonUIActionRouter.h"

#include "Input/CommonUIActionRouterBase.h"

DEFINE_LOG_CATEGORY(LogNinjaInputCommonUIActionRouter);

// --- Struct ----------

#if ENGINE_MINOR_VERSION > 3

bool FNinjaInputCommonAnalogCursor::ShouldVirtualAcceptSimulateMouseButton(const FKeyEvent& InKeyEvent, const EInputEvent InputEvent) const
{
	return ActionRouter.GetActiveInputMode() != ECommonInputMode::Game;
}

#endif

// --- Router ----------

void UNinjaInputCommonUIActionRouter::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

	const TSubclassOf<UCommonUIActionRouterBase> RouterClass = GetClass();
	UE_LOG(LogNinjaInputCommonUIActionRouter, Log, TEXT("Initialized %s as the Common UI Action Router"), *GetNameSafe(RouterClass));
}

TSharedRef<FCommonAnalogCursor> UNinjaInputCommonUIActionRouter::MakeAnalogCursor() const
{
	// The custom struct will evaluate this Router's input mode and decide on the Analog Cursor.
	return FCommonAnalogCursor::CreateAnalogCursor<FNinjaInputCommonAnalogCursor>(*this);
}
