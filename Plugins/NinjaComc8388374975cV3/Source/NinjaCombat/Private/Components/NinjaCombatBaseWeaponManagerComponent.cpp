// Ninja Bear Studio Inc., all rights reserved.
#include "Components/NinjaCombatBaseWeaponManagerComponent.h"

#include "NinjaCombatFunctionLibrary.h"
#include "Components/NinjaCombatManagerComponent.h"

void UNinjaCombatBaseWeaponManagerComponent::BeginPlay()
{
	Super::BeginPlay();

	UActorComponent* DamageComponent = UNinjaCombatFunctionLibrary::GetDamageManagerComponent(GetOwner());
	if (UNinjaCombatFunctionLibrary::IsValidDamageManagerComponent(DamageComponent))
	{
		FOwnerDiedDelegate DeathDelegate;
		DeathDelegate.BindDynamic(this, &ThisClass::HandleOwnerDeath);
		ICombatDamageManagerInterface::Execute_BindToOwnerDiedDelegate(DamageComponent, DeathDelegate);

		FOwnerDiedDelegate FinishedDyingDelegate;
		FinishedDyingDelegate.BindDynamic(this, &ThisClass::HandleOwnerFinishedDying);
		ICombatDamageManagerInterface::Execute_BindToOwnerFinishedDyingDelegate(DamageComponent, FinishedDyingDelegate);
	}
}

AActor* UNinjaCombatBaseWeaponManagerComponent::GetWeapon_Implementation(const FGameplayTagQuery& WeaponQuery) const
{
	checkNoEntry()
	return nullptr;
}

void UNinjaCombatBaseWeaponManagerComponent::HandleOwnerDeath_Implementation(AActor* Actor)
{
}

void UNinjaCombatBaseWeaponManagerComponent::HandleOwnerFinishedDying_Implementation(AActor* Actor)
{
}