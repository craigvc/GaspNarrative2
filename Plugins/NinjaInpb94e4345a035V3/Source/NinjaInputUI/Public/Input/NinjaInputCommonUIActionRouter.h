// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "Input/CommonAnalogCursor.h"
#include "Input/CommonUIActionRouterBase.h"
#include "Runtime/Launch/Resources/Version.h"
#include "Templates/SubclassOf.h"
#include "NinjaInputCommonUIActionRouter.generated.h"

DECLARE_LOG_CATEGORY_EXTERN(LogNinjaInputCommonUIActionRouter, Log, All);

// ReSharper disable once CppClassCanBeFinal
class FNinjaInputCommonAnalogCursor : public FCommonAnalogCursor
{
public:
	
	FNinjaInputCommonAnalogCursor(const UCommonUIActionRouterBase& InActionRouter) : FCommonAnalogCursor(InActionRouter)
	{
	}

#if ENGINE_MINOR_VERSION > 3
	
	virtual bool ShouldVirtualAcceptSimulateMouseButton(const FKeyEvent& InKeyEvent, EInputEvent InputEvent) const override;

#endif
};

/**
 * An Action Router for Common UI that allows parameterization of certain aspects.
 * 
 * Credits to Xist (Xi57) from the Forums for pointing out this class, its usage and the fact that
 * just by existing the system will automatically use it, replacing the default Router.
 */
UCLASS()
class NINJAINPUTUI_API UNinjaInputCommonUIActionRouter : public UCommonUIActionRouterBase
{
	
	GENERATED_BODY()

public:

	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	
protected:

	// -- Begin Action Router implementation
	virtual TSharedRef<FCommonAnalogCursor> MakeAnalogCursor() const override;
	// -- End Action Router implementation
	
};
