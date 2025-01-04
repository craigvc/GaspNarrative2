// Ninja Bear Studio Inc., all rights reserved.
#include "AbilitySystem/Types/FNinjaCombatGameplayEffectContext.h"

FNinjaCombatGameplayEffectContext* FNinjaCombatGameplayEffectContext::ExtractEffectContext(
	FGameplayEffectContextHandle Handle)
{
	FGameplayEffectContext* BaseEffectContext = Handle.Get();
	if (BaseEffectContext != nullptr && BaseEffectContext->GetScriptStruct()->IsChildOf(StaticStruct()))
	{
		return static_cast<FNinjaCombatGameplayEffectContext*>(BaseEffectContext);
	}

	return nullptr;
}

void FNinjaCombatGameplayEffectContext::SetPreviousHealthOnTarget(const float NewPreviousHealthOnTarget)
{
	if (NewPreviousHealthOnTarget > 0.f)
	{
		PreviousHealthOnTarget = NewPreviousHealthOnTarget;
		bHasPreviousHealthOnTarget = true;	
	}
}

void FNinjaCombatGameplayEffectContext::SetPreviousStaminaOnTarget(const float NewPreviousStaminaOnTarget)
{
	if (NewPreviousStaminaOnTarget > 0.f)
	{
		PreviousStaminaOnTarget = NewPreviousStaminaOnTarget;
		bHasPreviousStaminaOnTarget = true;
	}
}

void FNinjaCombatGameplayEffectContext::SetDamageApplied(const float NewDamageApplied)
{
	if (NewDamageApplied > 0.f)
	{
		DamageApplied = NewDamageApplied;
		bHasDamageApplied = true;	
	}
}

void FNinjaCombatGameplayEffectContext::SetMitigationCost(const float NewMitigationCost)
{
	if (NewMitigationCost > 0.f)
	{
		MitigationCost = NewMitigationCost;
		bHasMitigationCost = true;	
	}
}

FGameplayEffectContext* FNinjaCombatGameplayEffectContext::Duplicate() const
{
	FNinjaCombatGameplayEffectContext* NewContext = new FNinjaCombatGameplayEffectContext();
	*NewContext = *this;
		
	if (GetHitResult())
	{
		// Does a deep copy of the hit result.
		NewContext->AddHitResult(*GetHitResult(), true);
	}
		
	NewContext->TargetData.Append(TargetData);
	return NewContext;
}

UScriptStruct* FNinjaCombatGameplayEffectContext::GetScriptStruct() const
{
	return StaticStruct();
}

bool FNinjaCombatGameplayEffectContext::NetSerialize(FArchive& Ar, UPackageMap* Map, bool& bOutSuccess)
{
	Super::NetSerialize(Ar, Map, bOutSuccess);

	// Replication flags, starting right after the last bit used by the main implementation.
	enum ERepFlag
	{
		Rep_PreviousHealthOnTarget = 8,
		Rep_PreviousStaminaOnTarget,
		Rep_DamageApplied,
		Rep_MitigationCost,
		LengthBits
	};

	uint16 RepBits = 0;
    
	if (Ar.IsSaving())
	{
		if (bHasPreviousHealthOnTarget)	{ RepBits |= 1 << Rep_PreviousHealthOnTarget; }
		if (bHasPreviousStaminaOnTarget) { RepBits |= 1 << Rep_PreviousStaminaOnTarget; }
		if (bHasDamageApplied) { RepBits |= 1 << Rep_DamageApplied; }
		if (bHasMitigationCost) { RepBits |= 1 << Rep_MitigationCost; }
	}

	Ar.SerializeBits(&RepBits, LengthBits);

	if (RepBits & 1 << Rep_PreviousHealthOnTarget) { Ar << PreviousHealthOnTarget; }
	if (RepBits & 1 << Rep_PreviousStaminaOnTarget) { Ar << PreviousStaminaOnTarget; }
	if (RepBits & 1 << Rep_DamageApplied) { Ar << DamageApplied; }
	if (RepBits & 1 << Rep_MitigationCost) { Ar << MitigationCost; }

	bOutSuccess = true;
	return true;
}
