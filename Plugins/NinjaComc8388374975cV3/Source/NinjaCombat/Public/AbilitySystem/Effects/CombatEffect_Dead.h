// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "GameplayEffect.h"
#include "CombatEffect_Dead.generated.h"

class URemoveOtherGameplayEffectComponent;

/**
 * Represents the Dead state.
 */
UCLASS()
class NINJACOMBAT_API UCombatEffect_Dead : public UGameplayEffect
{
	
	GENERATED_BODY()

public:

	UCombatEffect_Dead();

protected:

	void RemoveGameplayEffect(TSubclassOf<UGameplayEffect> EffectClass) const;
	
private:

	/** Removes other relevant effects. */
	UPROPERTY()
	TObjectPtr<URemoveOtherGameplayEffectComponent> RemovedEffects;	
	
};
