// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "GameplayEffect.h"
#include "Animation/NinjaCombatAnimNotify.h"
#include "Types/ECombatAbilitySource.h"
#include "AnimNotify_OpportunityDamage.generated.h"

/**
 * Applies Opportunity Damage to a target.
 */
UCLASS(meta = (DisplayName = "Opportunity Damage"))
class NINJACOMBAT_API UAnimNotify_OpportunityDamage : public UNinjaCombatAnimNotify
{
	
	GENERATED_BODY()

public:

	/** Determines if this hit happens from the owner or from a weapon. */
	UPROPERTY(EditAnywhere, Category = "Opportunity Event")
	ECombatAbilitySource Source;

	/** Query used to retrieve the backing weapon. */
	UPROPERTY(EditAnywhere, Category = "Opportunity Event", meta = (EditCondition = "Source == ECombatAbilitySource::Weapon", EditConditionHides))
	FGameplayTagQuery WeaponQuery;
	
	/** Damage Gameplay effect applied when this damage happens. */
	UPROPERTY(EditAnywhere, Category = "Opportunity Event", NoClear)
	TSubclassOf<UGameplayEffect> DamageEffectClass;

	UAnimNotify_OpportunityDamage();
	
	// -- Begin Anim Notify implementation
	virtual void Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference) override;
	virtual FString GetNotifyName_Implementation() const override;
	// -- end Anim Notify implementation

};
