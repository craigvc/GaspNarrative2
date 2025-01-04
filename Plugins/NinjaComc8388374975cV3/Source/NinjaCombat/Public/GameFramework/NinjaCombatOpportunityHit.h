// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/Object.h"
#include "NinjaCombatOpportunityHit.generated.h"

class APawn;
class UGameplayEffect;

/**
 * Represents an Opportunity Hit happening in the Combat System.
 */
UCLASS()
class NINJACOMBAT_API UNinjaCombatOpportunityHit : public UObject
{
	
	GENERATED_BODY()

public:

	/**
	 * Creates a new instance of the Opportunity Hit.
	 *
	 * You have the option to use the default class or provide a customized one.
	 * In case you want to use the default one, you can just provide it or null to the Opportunity Hit Class.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Combat|Melee Scan", DisplayName = "New Melee Scan Instance")
	static UNinjaCombatOpportunityHit* NewInstance(TSubclassOf<UNinjaCombatOpportunityHit> OpportunityHitClass,
		AActor* Owner, APawn* Instigator, AActor* Causer, TSubclassOf<UGameplayEffect> OpportunityHitEffect);	
	
	/**
	 * Gets the instigator for this scan.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Combat|Opportunity Hit")
	APawn* GetInstigator() const { return Instigator; }

	/**
	 * Gets the causer for this scan, which may be the character or a weapon.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Combat|Opportunity Hit")
	AActor* GetCauser() const { return Causer; }

	/**
	 * Provides a Gameplay Effect applied from this hit.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Combat|Melee Scan")
	TSubclassOf<UGameplayEffect> GetOpportunityHitEffect() const { return OpportunityHitEffect; }
	
protected:

	/** Actor that has triggered this opportunity hit. */
	UPROPERTY(BlueprintReadOnly, Category = "Opportunity Hit")
	TObjectPtr<AActor> OpportunityOwner;
	
	/** Instigator for this scan. */
	UPROPERTY(BlueprintReadOnly, Category = "Opportunity Hit")
	TObjectPtr<APawn> Instigator;

	/** Causer of this scan. */
	UPROPERTY(BlueprintReadOnly, Category = "Opportunity Hit")
	TObjectPtr<AActor> Causer;

	/** Gameplay Effect applied from this hit. */
	UPROPERTY(BlueprintReadOnly, Category = "Opportunity Hit")
	TSubclassOf<UGameplayEffect> OpportunityHitEffect;
	
};
