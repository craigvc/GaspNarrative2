// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "FDamageLastStand.generated.h"

/**
 * Information about a last stand that reverts fatal damage.
 */
USTRUCT(BlueprintType)
struct NINJACOMBAT_API FDamageLastStand
{
	
	GENERATED_BODY()

	/** Informs if the fatal damage was reverted. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Last Stand")
	uint8 bIsLastStand:1 = false;

	/** Original incoming damage. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Last Stand")
	float OriginalDamage = 0.f;

	/** Mitigation cost spent to prevent this damage. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Last Stand")
	float MitigationCost = 0.f;
	
	/** New health after the damage has been reverted. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Last Stand")
	float NewHealth = 0.f;

};