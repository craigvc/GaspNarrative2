// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EquipmentManagerProviderInterface.generated.h"

class UNinjaEquipmentManagerComponent;

UINTERFACE(MinimalAPI, Blueprintable)
class UEquipmentManagerProviderInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * Allows actors to provide direct access to an Equipment Manager component.
 *
 * Even though this is an optional interface, using the provided static library to retrieve
 * the Equipment Manager Component will always use it first, before performing a component
 * scan in an actor.
 *
 * Equipments may be constantly queried by games and implementing this interface as a way
 * to provide the Manager Component, without iterating over actor components, may be a good
 * performance gain.
 */
class NINJAINVENTORYEQUIPMENT_API IEquipmentManagerProviderInterface
{
	
	GENERATED_BODY()

public:

	/**
	 * Provides the Equipment Manager assigned to an actor.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Equipment Manager Provider")
	UNinjaEquipmentManagerComponent* GetEquipmentManager() const;
	virtual UNinjaEquipmentManagerComponent* GetEquipmentManager_Implementation() const;
	
};