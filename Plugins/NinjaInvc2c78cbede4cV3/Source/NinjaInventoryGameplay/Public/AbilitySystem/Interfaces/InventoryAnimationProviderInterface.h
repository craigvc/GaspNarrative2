// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "UObject/Interface.h"
#include "InventoryAnimationProviderInterface.generated.h"

UINTERFACE(MinimalAPI, Blueprintable)
class UInventoryAnimationProviderInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * Provides an Animation Montage that can be used for an Inventory event.
 */
class NINJAINVENTORYGAMEPLAY_API IInventoryAnimationProviderInterface
{
	
	GENERATED_BODY()

public:

	/**
	 * Receives a montage that has been found by the system.
	 *
	 * @param Requester
	 *		Object requesting the animation. Must implement the Inventory Animation Receiver Interface
	 *		which will be used to provide the animation from the Query. This strategy allows asynchronous
	 *		loading of animation assets.
	 *
	 * @param AnimationQuery
	 *		Query used to retrieve the desired Animation.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Inventory Animation Provider Interface")
	bool GetInventoryAnimation(UPARAM(meta = (MustImplement = "/Script/NinjaInventoryGameplay.InventoryAnimationReceiverInterface")) UObject* Requester,
		FGameplayTagQuery AnimationQuery);

};