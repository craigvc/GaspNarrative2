// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "GameplayEffect.h"
#include "CombatEffect_RecoverPoise.generated.h"

/**
 * Recovers poise, removing current stagger progress.
 */
UCLASS()
class NINJACOMBAT_API UCombatEffect_RecoverPoise : public UGameplayEffect
{
	
	GENERATED_BODY()

public:

	UCombatEffect_RecoverPoise();
	
};
