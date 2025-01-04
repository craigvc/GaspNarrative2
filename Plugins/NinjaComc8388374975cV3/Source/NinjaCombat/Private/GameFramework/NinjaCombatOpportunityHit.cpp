// Ninja Bear Studio Inc., all rights reserved.
#include "GameFramework/NinjaCombatOpportunityHit.h"

#include "GameFramework/Actor.h"
#include "GameFramework/Pawn.h"

UNinjaCombatOpportunityHit* UNinjaCombatOpportunityHit::NewInstance(const TSubclassOf<UNinjaCombatOpportunityHit> OpportunityHitClass,
	AActor* Owner, APawn* Instigator, AActor* Causer, const TSubclassOf<UGameplayEffect> OpportunityHitEffect)
{
	const UClass* SafeOpportunityHitClass = IsValid(OpportunityHitClass) ? OpportunityHitClass.Get() : StaticClass(); 
	UNinjaCombatOpportunityHit* OpportunityHit = NewObject<UNinjaCombatOpportunityHit>(Owner, SafeOpportunityHitClass);
	
	OpportunityHit->OpportunityOwner = Owner;
	OpportunityHit->Instigator = Cast<APawn>(Instigator);
	OpportunityHit->Causer = Causer;
	OpportunityHit->OpportunityHitEffect = OpportunityHitEffect;

	return OpportunityHit;
}

