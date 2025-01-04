// Ninja Bear Studio Inc., all rights reserved.
#include "Damage/NinjaCombatDamageHandler.h"

#include "NinjaCombatFunctionLibrary.h"
#include "NinjaCombatTags.h"
#include "Engine/HitResult.h"
#include "GameFramework/Controller.h"
#include "GameFramework/Pawn.h"

void UNinjaCombatDamageHandler::HandleDamage_Implementation(UActorComponent* DamageManager, const FGameplayCueParameters& Parameters) const
{
}

bool UNinjaCombatDamageHandler::IsMeleeDamage(const FGameplayCueParameters& Parameters)
{
	return Parameters.AggregatedSourceTags.HasTagExact(Tag_Combat_Effect_Damage_Melee);
}

bool UNinjaCombatDamageHandler::IsRangedDamage(const FGameplayCueParameters& Parameters)
{
	return Parameters.AggregatedSourceTags.HasTagExact(Tag_Combat_Effect_Damage_Ranged);
}

bool UNinjaCombatDamageHandler::IsBlockedHit(const FGameplayCueParameters& Parameters)
{
	return Parameters.AggregatedSourceTags.HasTagExact(Tag_Combat_Effect_Damage_Blocked);
}

bool UNinjaCombatDamageHandler::IsBreakerHit(const FGameplayCueParameters& Parameters)
{
	return Parameters.AggregatedSourceTags.HasTagExact(Tag_Combat_Effect_Damage_Breaker);
}

bool UNinjaCombatDamageHandler::IsStaggerHit(const FGameplayCueParameters& Parameters)
{
	return Parameters.AggregatedSourceTags.HasTagExact(Tag_Combat_Effect_Damage_Stagger);
}

bool UNinjaCombatDamageHandler::IsCriticalHit(const FGameplayCueParameters& Parameters)
{
	return Parameters.AggregatedSourceTags.HasTagExact(Tag_Combat_Effect_Damage_Critical);
}

bool UNinjaCombatDamageHandler::IsFatalHit(const FGameplayCueParameters& Parameters)
{
	return Parameters.AggregatedSourceTags.HasTagExact(Tag_Combat_Effect_Damage_Fatal);
}

bool UNinjaCombatDamageHandler::IsDead(const FGameplayCueParameters& Parameters)
{
	return Parameters.OriginalTag == Tag_GameplayCue_Combat_Death;
}

bool UNinjaCombatDamageHandler::IsSourceAuthoritative(const FGameplayCueParameters& Parameters)
{
	const AActor* Instigator = Parameters.GetInstigator();
	return IsValid(Instigator) && Instigator->HasAuthority(); 
}

bool UNinjaCombatDamageHandler::IsSourceLocallyController(const FGameplayCueParameters& Parameters)
{
	const AActor* Instigator = Parameters.GetInstigator();

	if (Instigator->IsA(APawn::StaticClass()))
	{
		const APawn* InstigatorPawn = Cast<APawn>(Instigator);
		return IsValid(InstigatorPawn) && InstigatorPawn->IsLocallyControlled();
	}

	if (Instigator->IsA(AController::StaticClass()))
	{
		const AController* InstigatorController = Cast<AController>(Instigator);
		return IsValid(InstigatorController) && InstigatorController->IsLocalController();
	}

	return false;
}

bool UNinjaCombatDamageHandler::IsTargetAuthoritative(const FGameplayCueParameters& Parameters)
{
	const FHitResult* HitResult = Parameters.EffectContext.GetHitResult();
	if (HitResult)
	{
		const AActor* Target = HitResult->GetActor();
		return IsValid(Target) && Target->HasAuthority(); 	
	}

	return false;
}

bool UNinjaCombatDamageHandler::IsTargetLocallyController(const FGameplayCueParameters& Parameters)
{
	const FHitResult* HitResult = Parameters.EffectContext.GetHitResult();
	if (HitResult)
	{
		const APawn* TargetPawn = Cast<APawn>(HitResult->GetActor());
		return IsValid(TargetPawn) && TargetPawn->IsLocallyControlled(); 	
	}

	return false;	
}
