// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "Abilities/GameplayAbilityTypes.h"
#include "FNinjaCombatGameplayEffectContext.generated.h"

/**
 * Enhances the default effect context to add details from the combat system.
 * 
 * This is not directly used by the Combat/Ability System. Instead, a proxy object is used so you
 * can use any other Effect Context struct as long as you provide an appropriate proxy for it.
 */
USTRUCT(BlueprintType)
struct FNinjaCombatGameplayEffectContext : public FGameplayEffectContext
{
	GENERATED_BODY()

	typedef Super FGameplayEffectContext;

	/** All targets that were gathered for this context. */
	FGameplayAbilityTargetDataHandle TargetData;
	
	FNinjaCombatGameplayEffectContext()
		: FNinjaCombatGameplayEffectContext(nullptr, nullptr)
	{
	}

	FNinjaCombatGameplayEffectContext(AActor* InInstigator, AActor* InEffectCauser)
		: FGameplayEffectContext(InInstigator, InEffectCauser)
	{
		bHasPreviousHealthOnTarget = false;
		bHasPreviousStaminaOnTarget = false;
		bHasDamageApplied = false;
		bHasMitigationCost = false;
		PreviousHealthOnTarget = 0.f;
		PreviousStaminaOnTarget = 0.f;
		DamageApplied = 0.f;
		MitigationCost = 0.f;
	}

	/**
	 * Provides the current value for the Previous Health on Target. 
	 */
	float GetPreviousHealthOnTarget() const { return PreviousHealthOnTarget; }
	
	/**
	 * Sets the new value for Previous Health on Target and marks the property dirty.
	 */
	void SetPreviousHealthOnTarget(float NewPreviousHealthOnTarget);

	/**
	 * Provides the current value for the Previous Stamina on Target. 
	 */
	float GetPreviousStaminaOnTarget() const { return PreviousStaminaOnTarget; }
	
	/**
	 * Sets the new value for Previous Stamina on Target and marks the property dirty.
	 */
	void SetPreviousStaminaOnTarget(float NewPreviousStaminaOnTarget);
	
	/**
	 * Provides the current value for the Damage Applied. 
	 */
	float GetDamageApplied() const { return DamageApplied; }
	
	/**
	 * Sets the new value for Damage Applied and marks the property dirty.
	 */
	void SetDamageApplied(float NewDamageApplied);

	/**
	 * Provides the current value for the Mitigation Cost.
	 */
	float GetMitigationCost() const { return MitigationCost; };	
	
	/**
	 * Sets the new value for Mitigation Cost and marks the property dirty.
	 */
	void SetMitigationCost(float NewMitigationCost);	
	
	// -- Begin Gameplay Effect Context implementation
	virtual FGameplayEffectContext* Duplicate() const override;
	virtual UScriptStruct* GetScriptStruct() const override;
	virtual bool NetSerialize(FArchive& Ar, UPackageMap* Map, bool& bOutSuccess) override;
	// -- End Gameplay Effect Context implementation
	
	/** Returns the wrapped FNinjaCombatGameplayEffectContext from the handle. */
	static NINJACOMBAT_API FNinjaCombatGameplayEffectContext* ExtractEffectContext(FGameplayEffectContextHandle Handle);

protected:

	/** Amount of health before this context was applied. */
	UPROPERTY()	
	float PreviousHealthOnTarget;

	/** Amount of stamina before this context was applied. */
	UPROPERTY()	
	float PreviousStaminaOnTarget;
	
	/** The amount of damage applied in this context. */
	UPROPERTY()
	float DamageApplied;

	/** The amount of damage applied that was mitigated. */
	UPROPERTY()	
	float MitigationCost;

private:
	
	bool bHasPreviousHealthOnTarget;
	bool bHasPreviousStaminaOnTarget;
	bool bHasDamageApplied;
	bool bHasMitigationCost;
	
};

template<>
struct TStructOpsTypeTraits<FNinjaCombatGameplayEffectContext> : TStructOpsTypeTraitsBase2<FNinjaCombatGameplayEffectContext>
{
	enum
	{
		WithNetSerializer = true,
		WithCopy = true
	};
};