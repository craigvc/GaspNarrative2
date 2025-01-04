// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "InputSetupProviderInterface.generated.h"

class UNinjaInputSetupDataAsset;

UINTERFACE(MinimalAPI, Blueprintable)
class UInputSetupProviderInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * Supports providing specific input setups to add or remove.
 * This is used when a Pawn is assigned to a Controller.
 */
class NINJAINPUT_API IInputSetupProviderInterface
{
	
	GENERATED_BODY()

public:

	/**
	 * Provides all input setups to add.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Input Setup Provider Interface")
	TArray<UNinjaInputSetupDataAsset*> GetAddedSetups() const;

	/**
	* Provides all input setups to remove.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Input Setup Provider Interface")
	TArray<UNinjaInputSetupDataAsset*> GetRemovedSetups() const;
	
};