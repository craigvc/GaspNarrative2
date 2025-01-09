// Copyright Narrative Tools 2024. 


#include "Items/RangedWeaponItem.h"
#include "Items/AmmoItem.h"

URangedWeaponItem::URangedWeaponItem()
{
	bAutomaticFire = false;
	RateOfFire = 0.15f;
	AimFOVPct = 0.75f;
	TraceData.TraceDistance = 15000.f;

	//Ranged weapons always want us to face our camera direction, and strafe instead of rotation to face velocity. 
	bPawnFollowsControlRotation = true;
	bPawnOrientsRotationToMovement = false;
}

FCombatTraceData URangedWeaponItem::GetTraceData() const
{
	return TraceData;
}

float URangedWeaponItem::GetAttackRange() const
{
	return TraceData.TraceDistance;
}
