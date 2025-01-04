// Ninja Bear Studio Inc., all rights reserved.
#include "Types/FDamageEntry.h"

#include "NinjaCombatFunctionLibrary.h"
#include "NinjaCombatSettings.h"
#include "NinjaCombatTags.h"
#include "AbilitySystem/Interfaces/CombatEffectContextProxyInterface.h"

FDamageEntry FDamageEntry::GenerateNewEntry(const FGameplayEffectSpec& EffectSpec)
{
	static int32 GHandleID = 0;
	FDamageEntry NewEntry(GHandleID++, EffectSpec);
	return NewEntry;
}

void FDamageEntry::Initialize(const int32 InHandle, const FGameplayEffectSpec& InEffectSpec)
{
    Handle = InHandle;
    EffectContext = InEffectSpec.GetContext();
    bHandled = false;
    
    const FGameplayTagContainer* SourceContainer = InEffectSpec.CapturedSourceTags.GetAggregatedTags();
    if (SourceContainer != nullptr)
    {
        CapturedSourceTags = *SourceContainer;
    }

    const FGameplayTagContainer* TargetContainer = InEffectSpec.CapturedTargetTags.GetAggregatedTags();
    if (TargetContainer != nullptr)
    {
        CapturedTargetTags = *TargetContainer;
    }
}

bool FDamageEntry::IsValid() const
{
    return Handle != INDEX_NONE && EffectContext.IsValid();
}

bool FDamageEntry::IsCriticalHit() const
{
	return CapturedSourceTags.HasTagExact(Tag_Combat_Effect_Damage_Critical);
}

bool FDamageEntry::IsBlockedHit() const
{
	return CapturedSourceTags.HasTagExact(Tag_Combat_Effect_Damage_Blocked);
}

bool FDamageEntry::IsBreakerHit() const
{
	return CapturedSourceTags.HasTagExact(Tag_Combat_Effect_Damage_Breaker);
}

bool FDamageEntry::IsFatalHit() const
{
	return CapturedSourceTags.HasTagExact(Tag_Combat_Effect_Damage_Fatal);
}

bool FDamageEntry::IsStaggeringHit() const
{
	return CapturedSourceTags.HasTagExact(Tag_Combat_Effect_Damage_Stagger);
}

bool FDamageEntry::IsFatalOpportunityAttack() const
{
	return CapturedSourceTags.HasTagExact(Tag_Combat_Effect_Damage_Fatal)
		&& CapturedTargetTags.HasTag(Tag_Combat_State_Opportunity_Victim);
}

AActor* FDamageEntry::GetDamageInstigator() const
{
    return EffectContext.GetInstigator();
}

AActor* FDamageEntry::GetDamageCauser() const
{
    return EffectContext.GetEffectCauser();
}

float FDamageEntry::GetDamageApplied() const
{
	const ICombatEffectContextProxyInterface* Proxy = GetDefault<UNinjaCombatSettings>()->GetDefaultEffectContextProxy();
    if (IsValid() && Proxy != nullptr)
    {
    	return Proxy->GetDamageApplied(EffectContext.Get());
    }

    return 0.f;
}

FGameplayCueParameters FDamageEntry::GetGameplayCueParameters() const
{
	FGameplayCueParameters CueParameters = UNinjaCombatFunctionLibrary::CreateGameplayCueFromEffectContext(EffectContext);
	CueParameters.AggregatedSourceTags = CapturedSourceTags;
	CueParameters.AggregatedTargetTags = CapturedTargetTags;
	return CueParameters;
}

bool FDamageEntry::NetSerialize(FArchive& Ar, UPackageMap* Map, bool& bOutSuccess)
{
    enum ERepFlag
    {
        Rep_Timestamp = 0,
        Rep_Max
    };

    uint16 RepBits = 0;
    if (Ar.IsSaving())
    {
        if (Handle != INDEX_NONE) { RepBits |= 1 << Rep_Timestamp; }
    }
    
    Ar.SerializeBits(&RepBits, Rep_Max);
    EffectContext.NetSerialize(Ar, Map, bOutSuccess);
    CapturedSourceTags.NetSerialize(Ar, Map, bOutSuccess);
    CapturedTargetTags.NetSerialize(Ar, Map, bOutSuccess);

    if (RepBits & 1 << Rep_Timestamp)
    {
        Ar << Handle;
    }
        
    bOutSuccess = true;
    return true;
}
