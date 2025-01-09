// Copyright Narrative Tools 2024. 


#include "Items/MeleeWeaponItem.h"

float UMeleeWeaponItem::GetAttackRange() const
{
	return MeleeData.TraceData.TraceDistance;
}

FCombatTraceData UMeleeWeaponItem::GetTraceData() const
{
	return MeleeData.TraceData;
}

TArray<UNarrativeAnimSet*> UMeleeWeaponItem::GetComboAnims(const bool bHeavyAttack) const
{
	return bHeavyAttack ? MeleeData.HeavyAttackCombos : MeleeData.AttackCombos;
}
