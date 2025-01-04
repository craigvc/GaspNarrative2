// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EquipmentActorInterface.generated.h"

class UNinjaEquipment;

UINTERFACE(MinimalAPI, Blueprintable)
class UEquipmentActorInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * Defines basic elements for an Equipment, that should be implemented by any equipment actors.
 */
class NINJAINVENTORYEQUIPMENT_API IEquipmentActorInterface
{
	
	GENERATED_BODY()

public:

	/**
	 * Retrieves the Equipment that originated the actor.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Equipment Actor")
	const UNinjaEquipment* GetEquipment() const;
	virtual const UNinjaEquipment* GetEquipment_Implementation() const; 
	
	/**
	 * Sets the Equipment that owns this actor.
	 *
	 * @param Equipment
	 *		The immutable equipment that owns this actor. Through  this instance, an actor
	 *		can access the equipment instance, definition and so on.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Equipment Actor")
	void SetEquipment(const UNinjaEquipment* Equipment);
	virtual void SetEquipment_Implementation(const UNinjaEquipment* Equipment);
	
	/**
	 * Determines if this Actor should be considered the effect causer of a granted ability.
	 *
	 * By default, this returns true, but if you have multiple Actors being spawned by one Equipment,
	 * then you should make sure that the correct one will return true and others will return false.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Equipment Actor")
	bool IsEffectCauser() const;
	virtual bool IsEffectCauser_Implementation() const;
	
};