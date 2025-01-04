// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "NinjaCombatAnimNotify.generated.h"

/**
 * Base Notify that facilitates retrieving combat components.
 */
UCLASS(Abstract)
class NINJACOMBAT_API UNinjaCombatAnimNotify : public UAnimNotify
{
	
	GENERATED_BODY()

public:

	UNinjaCombatAnimNotify();

};
