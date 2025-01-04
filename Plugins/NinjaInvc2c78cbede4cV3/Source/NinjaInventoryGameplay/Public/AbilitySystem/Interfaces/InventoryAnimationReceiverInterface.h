// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "InventoryAnimationReceiverInterface.generated.h"

UINTERFACE(MinimalAPI, Blueprintable)
class UInventoryAnimationReceiverInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * Receives an Animation Montage that has been loaded, once it has been requested by the same object.
 */
class NINJAINVENTORYGAMEPLAY_API IInventoryAnimationReceiverInterface
{
	
	GENERATED_BODY()

public:

	/**
	 * Receives a montage that has been found by the system.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Inventory Animation Receiver Interface")
	void HandleAnimationLoaded(UAnimMontage* MontageToPlay, FName MontageSection);

	/**
	 * Handles a montage that has not been found.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Inventory Animation Receiver Interface")
	void HandleAnimationNotFound();
	
};