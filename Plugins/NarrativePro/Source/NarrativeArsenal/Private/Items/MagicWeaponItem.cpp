// Copyright Narrative Tools 2024. 


#include "Items/MagicWeaponItem.h"

TArray<UNarrativeAnimSet*> UMagicWeaponItem::GetComboAnims(const bool bHeavyAttack) const
{
	return bHeavyAttack ? HeavyAttackCombos : AttackCombos;
}
