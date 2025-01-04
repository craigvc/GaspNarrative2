// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Runtime/Launch/Resources/Version.h"
#include "UObject/Interface.h"

#if ENGINE_MINOR_VERSION < 5
#include "InstancedStruct.h"
#else
#include "StructUtils/InstancedStruct.h"
#endif

#include "OperableItemInterface.generated.h"

class UNinjaInventoryItem;

/**
 * A base payload for operations executed by fragments.
 */
USTRUCT(BlueprintType)
struct NINJAINVENTORY_API FInventoryFragmentPayload
{
	
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fragment Payload", meta = (Categories = "Inventory.Item.Fragment.Operation"))
	FGameplayTag OperationTag = FGameplayTag::EmptyTag;
	
	/** Main item receiving the operation. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fragment Payload")
	TObjectPtr<UNinjaInventoryItem> Item = nullptr;
	
};

UINTERFACE(MinimalAPI, meta = (CannotImplementInterfaceInBlueprint))
class UOperableItemInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * Defines the API for items that can be operated on.
 */
class NINJAINVENTORY_API IOperableItemInterface
{
	
	GENERATED_BODY()

public:

	/**
	 * Provides all Gameplay Tags representing supported operations.
	 */
	virtual FGameplayTagContainer GetSupportedOperationTags() const = 0;
	
	/**
	 * Checks if a certain operation can be performed.
	 */
	virtual bool EvaluateOperation(const TInstancedStruct<FInventoryFragmentPayload>& Payload) const = 0;
	
	/**
	 * Performs an operation between this fragment an anything provided in the payload.
	 */
	virtual void PerformOperation(const TInstancedStruct<FInventoryFragmentPayload>& Payload) = 0;

};
