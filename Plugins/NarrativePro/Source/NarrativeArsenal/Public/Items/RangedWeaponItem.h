// Copyright Narrative Tools 2024. 

#pragma once

#include "CoreMinimal.h"
#include "Items/WeaponItem.h"
#include "RangedWeaponItem.generated.h"

/**
 * Base class for a ranged weapon - includes some properties that aren't required for melee based weapons 
 */
UCLASS()
class NARRATIVEARSENAL_API URangedWeaponItem : public UWeaponItem
{
	GENERATED_BODY()

protected:

	URangedWeaponItem();

	/** The hitscan ability will read this to configure itself */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon|Config|Ranged Weapon")
	bool bAutomaticFire;

	/** The time between shots, hitscan ability configures itself with this */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon|Config|Ranged Weapon")
	float RateOfFire;
	
	/** The FOV we should zoom in to as a percentage of the base FOV. 1=no zoom at all, 0.1 = huge amount of zoom */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon|Config|Ranged Weapon", meta = (ClampMin=0.1, ClampMax=1.0))
	float AimFOVPct;

	//The trace data we'll use when firing the weapon 
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "Weapon|Config|Trace")
	FCombatTraceData TraceData;

	virtual FCombatTraceData GetTraceData() const override;
	virtual float GetAttackRange() const override;

};
