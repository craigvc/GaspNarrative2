// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Engine/HitResult.h" 
#include "GameFramework/Actor.h"
#include "FDamageCalculation.generated.h"

/**
 * Transfer object for the damage calculation input.
 */
USTRUCT(BlueprintType)
struct NINJACOMBAT_API FDamageCalculationInput
{
	GENERATED_BODY()
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Damage Calculation Input")
	TWeakObjectPtr<AActor> DamageInstigator = nullptr;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Damage Calculation Input")
	TWeakObjectPtr<AActor> TargetActor = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Damage Calculation Input")
	FHitResult HitResult;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Damage Calculation Input")
	float Damage = 0.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Damage Calculation Input")
	float CurrentHealth = 0.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Damage Calculation Input")
	float CurrentStamina = 0.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Damage Calculation Input")
	float BlockChance = 0.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Damage Calculation Input")
	float BlockMitigation = 0.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Damage Calculation Input")
	float BlockLimit = 0.f;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Damage Calculation Input")
	float BlockStaminaCostRate = 0.f;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Damage Calculation Input")
	float DefenseChance = 0.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Damage Calculation Input")
	float DefenseMitigation = 0.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Damage Calculation Input")
	float DefenseLimit = 0.f;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Damage Calculation Input")
	float DefenseStaminaCostRate = 0.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Damage Calculation Input")
	float ArmorReduction = 0.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Damage Calculation Input")
	FGameplayTagContainer SourceTags = FGameplayTagContainer::EmptyContainer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Damage Calculation Input")
	FGameplayTagContainer TargetTags = FGameplayTagContainer::EmptyContainer;

	FDamageCalculationInput()
	{
		HitResult.Init();
	}
	
	AActor* GetDamageInstigator() const
	{
		return DamageInstigator.IsValid() && DamageInstigator->IsValidLowLevelFast() ?
			DamageInstigator.Get() : nullptr;
	}
	
	AActor* GetTargetActor() const
	{
		return TargetActor.IsValid() && TargetActor->IsValidLowLevelFast() ?
			TargetActor.Get() : nullptr;
	}

	void SetHitResult(const FHitResult* NewHitResult)
	{
		if (NewHitResult)
		{
			HitResult = *NewHitResult;
		}
	}
};

/**
 * Transfer object for the damage calculation output.
 */
USTRUCT(BlueprintType)
struct NINJACOMBAT_API FDamageCalculationOutput
{
	GENERATED_BODY()
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Damage Calculation Output")
	float OriginalDamage = 0.f;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Damage Calculation Output")
	float ModifiedDamage = 0.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Damage Calculation Output")
	float DamageMitigatedFromArmor = 0.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Damage Calculation Output")
	float DamageMitigatedFromBlocking = 0.f;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Damage Calculation Output")
	float DamageMitigatedFromDefense = 0.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Damage Calculation Output")
	float BlockStaminaCost = 0.f;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Damage Calculation Output")
	float DefenseStaminaCost = 0.f;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Damage Calculation Output")
	float Health = 0.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Damage Calculation Output")
	float Stamina = 0.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Damage Calculation Output")
	bool bIsCancelled = false;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Damage Calculation Output")
	bool bInvulnerable = false;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Damage Calculation Output")
	bool bIsModified = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Damage Calculation Output")
	bool bIsBlocked = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Damage Calculation Output")
	bool bIsDefended = false;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Damage Calculation Output")
	bool bIsBreaker = false;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Damage Calculation Output")
	bool bIsFatal = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Damage Calculation Output")
	bool bIsLastStand = false;

	float GetAppliedDamage() const
	{
		const float BaseDamage = bIsModified ? ModifiedDamage : OriginalDamage;
		return FMath::Max(0.f, BaseDamage - GetMitigatedDamage());
	}

	float GetMitigatedDamage() const
	{
		return DamageMitigatedFromArmor + DamageMitigatedFromBlocking + DamageMitigatedFromDefense;
	}

	float GetMitigationCost() const
	{
		return BlockStaminaCost + DefenseStaminaCost;
	}
};