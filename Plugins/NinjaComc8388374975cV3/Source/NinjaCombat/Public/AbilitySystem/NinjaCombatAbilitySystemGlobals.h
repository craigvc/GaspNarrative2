// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemGlobals.h"
#include "NinjaCombatAbilitySystemGlobals.generated.h"

/**
 * Extended Ability Globals for the combat system.
 *
 * This must be added to the project's configuration class, in the DefaultGame.ini file.
 * <pre>
 * [/Script/GameplayAbilities.AbilitySystemGlobals]
 * AbilitySystemGlobalsClassName="/Script/NinjaCombat.NinjaCombatAbilitySystemGlobals"
 * </pre>
 */
UCLASS()
class NINJACOMBAT_API UNinjaCombatAbilitySystemGlobals : public UAbilitySystemGlobals
{
	
	GENERATED_BODY()
	
public:

	// -- Begin Ability System Globals implementation
	virtual FGameplayAbilityActorInfo* AllocAbilityActorInfo() const override;
	virtual FGameplayEffectContext* AllocGameplayEffectContext() const override;
	// -- End Ability System Globals implementation
	
};
