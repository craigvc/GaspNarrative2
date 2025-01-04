// Ninja Bear Studio Inc., all rights reserved.
#include "Data/NinjaCombatDamageDataAsset.h"

UNinjaCombatDamageDataAsset::UNinjaCombatDamageDataAsset()
{
	bEnableRagdollOnDeath = false;
	bGenerateDamagePerceptionEvent = true;
	LifespanOnDeath = 2.f;
	DeathTimeLimit = 10.f; 
}
