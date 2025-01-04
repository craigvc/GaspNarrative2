// Ninja Bear Studio Inc., all rights reserved.
#include "Animation/Notifies/AnimNotify_OpportunityDamage.h"

#include "NinjaCombatLog.h"
#include "NinjaCombatTags.h"
#include "AbilitySystem/Effects/CombatEffect_FatalDamage.h"
#include "Animation/NinjaCombatAnimNotifyHelpers.h"
#include "Components/SkeletalMeshComponent.h"
#include "GameFramework/Actor.h"
#include "GameFramework/NinjaCombatOpportunityHit.h"
#include "GameFramework/Pawn.h"

UAnimNotify_OpportunityDamage::UAnimNotify_OpportunityDamage()
{
	Source = ECombatAbilitySource::Weapon;
	DamageEffectClass = UCombatEffect_FatalDamage::StaticClass();
	WeaponQuery = FGameplayTagQuery::EmptyQuery;
}

void UAnimNotify_OpportunityDamage::Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference)
{
	AActor* Owner = MeshComp->GetOwner();
	if (!IsValid(Owner))
	{
		return;
	}
	
	AActor* Causer;
	
	if (Source == ECombatAbilitySource::Weapon)
	{
		const TScriptInterface<ICombatWeaponInterface> WeaponScript = FNinjaCombatAnimNotifyHelpers::GetWeapon(Owner, WeaponQuery);
		Causer = Cast<AActor>(WeaponScript.GetObject());
	}
	else
	{
		Causer = IsValid(MeshComp) ? MeshComp->GetOwner() : nullptr;
	}

	if (!IsValid(Causer))
	{
		COMBAT_LOG_ARGS(Warning, "Unable to create Opportunity Hit for '%s'.", *GetNameSafe(Owner));
	}

	APawn* OwnerPawn = Cast<APawn>(Owner);
	const UNinjaCombatOpportunityHit* OpportunityHit = UNinjaCombatOpportunityHit::NewInstance(UNinjaCombatOpportunityHit::StaticClass(), Owner, OwnerPawn, Causer, DamageEffectClass);
	checkf(IsValid(OpportunityHit), TEXT("Sanity Check: Unable to create an Opportunity Hit."));

	FNinjaCombatAnimNotifyHelpers::BroadcastEvent(Owner, Tag_Combat_Event_Opportunity_Damage, OpportunityHit);	
}

FString UAnimNotify_OpportunityDamage::GetNotifyName_Implementation() const
{
	return "Opportunity Damage";
}
