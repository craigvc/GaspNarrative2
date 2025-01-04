// Ninja Bear Studio Inc., all rights reserved.
#include "Interfaces/CombatMeleeInterface.h"

#include "NinjaCombatTags.h"
#include "Components/MeshComponent.h"
#include "GameFramework/Actor.h"

UMeshComponent* ICombatMeleeInterface::GetMeleeMesh_Implementation() const
{
	const AActor* SelfActor = Cast<AActor>(this);

	const FName Tag = Tag_Combat_Component_MeleeScanSource.GetTag().GetTagName();
	return SelfActor->FindComponentByTag<UMeshComponent>(Tag);
}

UMeshComponent* ICombatMeleeInterface::GetMeleeMeshByTag_Implementation(const FGameplayTag ComponentTag) const
{
	if (ComponentTag.IsValid())
	{
		return nullptr;	
	}
	
	const AActor* SelfActor = Cast<AActor>(this);
	return SelfActor->FindComponentByTag<UMeshComponent>(ComponentTag.GetTagName());
}

TSubclassOf<UGameplayEffect> ICombatMeleeInterface::GetHitEffectClass_Implementation() const
{
	// A melee hit effect is not required and may be provided by the Ability.
	return nullptr;
}

float ICombatMeleeInterface::GetHitEffectLevel_Implementation() const
{
	// A melee hit effect level is not required and may be provided by the ability.
	// Returning zero or negative values will discard the output and use the Ability's value instead.
	return 0.f;
}

bool ICombatMeleeInterface::GetDamage_Implementation(float& OutDamage) const
{
	// By default, damage is set via Gameplay Effects.
	return false;
}

bool ICombatMeleeInterface::GetPoiseConsumption_Implementation(float& OutPoiseConsumption) const
{
	// By default, poise consumption is set via Gameplay Effects.
	return false;
}

TArray<UNiagaraComponent*> ICombatMeleeInterface::GetAttackTrails_Implementation() const
{
	// Having attack trails is not mandatory for a melee weapon.
	return TArray<UNiagaraComponent*>();
}

float ICombatMeleeInterface::GetMeleeImpactStrength_Implementation() const
{
	return 10000.f;
}

TArray<UNiagaraComponent*> ICombatMeleeInterface::GetImpactTrails_Implementation() const
{
	// Having impact trails is not mandatory for a melee weapon.
	return TArray<UNiagaraComponent*>();	
}
