// Ninja Bear Studio Inc., all rights reserved.
#include "Components/NinjaCombatFactionDamageEvaluator.h"

#if NBS_WITH_FACTIONS
#include "GenericTeamAgentInterface.h"
#include "NinjaFactionFunctionLibrary.h"
#endif

UNinjaCombatFactionDamageEvaluator::UNinjaCombatFactionDamageEvaluator()
{
	PrimaryComponentTick.bCanEverTick = true;
	PrimaryComponentTick.bStartWithTickEnabled = false;

	bCancelFriendlyDamage = true;
	bDisableFriendlyDamage = true;
}

bool UNinjaCombatFactionDamageEvaluator::ShouldCancelDamage_Implementation(const float Damage, const AActor* Instigator,
	const AActor* Target, const FGameplayTagContainer SourceTags, const FGameplayTagContainer TargetTags) const
{
	bool bCancelDamage = false;
	
#if NBS_WITH_FACTIONS	
	if (bCancelFriendlyDamage)
	{
		TEnumAsByte<ETeamAttitude::Type> TeamAttitude;
		if (UNinjaFactionFunctionLibrary::GetAttitude(Instigator, Target, TeamAttitude))
		{
			bCancelDamage = TeamAttitude == ETeamAttitude::Friendly;
		}
	}
#endif

	return bCancelDamage;
}

float UNinjaCombatFactionDamageEvaluator::ModifyDamage_Implementation(const float Damage, const AActor* Instigator,
	const AActor* Target, const FGameplayTagContainer SourceTags,const FGameplayTagContainer TargetTags) const
{
	float ActualDamage = Damage;
	
#if NBS_WITH_FACTIONS
	if (bDisableFriendlyDamage)
	{
		TEnumAsByte<ETeamAttitude::Type> TeamAttitude;
		if (UNinjaFactionFunctionLibrary::GetAttitude(Instigator, Target, TeamAttitude))
		{
			if (TeamAttitude == ETeamAttitude::Friendly)
			{
				ActualDamage = 0.f;
			}
		}
	}
#endif
	
	return ActualDamage;
}
