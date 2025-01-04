// Copyright Narrative Tools 2024. 

#pragma once

#include "CoreMinimal.h"
#include "Items/WeaponItem.h"
#include "RangedWeaponItem.generated.h"

/**
 * 
 */
UCLASS()
class NARRATIVEARSENAL_API URangedWeaponItem : public UWeaponItem
{
	GENERATED_BODY()

protected:

	URangedWeaponItem();

	/** The hitscan ability will read this to configure itself */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon|Config|Attack")
	bool bAutomaticFire;

	/** The time between shots, hitscan ability configures itself with this */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon|Config|Attack")
	float RateOfFire;
};
