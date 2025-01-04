// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "NinjaCombatAnimNotifyState.generated.h"

/**
 * Base Notify State that facilitates retrieving combat components.
 */
UCLASS(Abstract)
class NINJACOMBAT_API UNinjaCombatAnimNotifyState : public UAnimNotifyState
{
	
	GENERATED_BODY()

public:

	UNinjaCombatAnimNotifyState();

};
