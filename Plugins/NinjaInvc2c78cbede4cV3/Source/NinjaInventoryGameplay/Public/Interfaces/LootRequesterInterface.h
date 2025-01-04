// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "LootRequesterInterface.generated.h"

class AActor;

UINTERFACE(MinimalAPI, Blueprintable)
class ULootRequesterInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * Defines the contract used by Loot Selectors to communicate with a Loot Requester
 */
class NINJAINVENTORYGAMEPLAY_API ILootRequesterInterface
{
	
	GENERATED_BODY()

public:

	/**
	 * Provides all potential receivers for the item being evaluated.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Loot Requester")
	void GetLootReceivers(TArray<AActor*>& OutReceivers) const;

};