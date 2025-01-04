// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "GameplayEffect.h"
#include "CombatEffect_Damage.generated.h"

class UAssetTagsGameplayEffectComponent;
class UAdditionalEffectsGameplayEffectComponent;

/**
 * Damages poise and applies the effect to break recovery.
 */
UCLASS()
class NINJACOMBAT_API UCombatEffect_Damage : public UGameplayEffect
{
	
	GENERATED_BODY()

public:

	UCombatEffect_Damage();

protected:

	/** Adds a Gameplay Tag to the internal Asset Tag component. */
	void AddAssetTags(const FGameplayTag& Tag) const;

	/** Adds a Gameplay Effect to apply with this one. */
	void AddAdditionalEffect(const TSubclassOf<UGameplayEffect>& EffectClass) const;
	
private:
	
	/** Component containing tags available to this asset. */
	UPROPERTY()
	TObjectPtr<UAssetTagsGameplayEffectComponent> AssetTags;

	/** Adds other effects along with this one. */
	UPROPERTY()
	TObjectPtr<UAdditionalEffectsGameplayEffectComponent> AdditionalEffects;
};

