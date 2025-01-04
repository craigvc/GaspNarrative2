// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "AbilitySystem/Providers/NinjaCombatMotionWarpingTargetProvider.h"
#include "Types/TargetingSystemTypes.h"
#include "TargetProvider_TargetingSystem.generated.h"

class UTargetingPreset;

/**
 * Collects a target using the Gameplay Targeting System.
 */
UCLASS(meta = (DisplayName = "Targeting System Provider"))
class NINJACOMBAT_API UTargetProvider_TargetingSystem : public UNinjaCombatMotionWarpingTargetProvider
{
	
	GENERATED_BODY()

public:

	UTargetProvider_TargetingSystem();

	// -- Begin Target Provider implementation
	virtual void RequestWarpTarget_Implementation(UNinjaCombatGameplayAbility* CombatAbility) const override;
	// -- End Target Provider implementation
	
protected:

	/** The Targeting Preset used by the targeting system. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Warping Target Provider")
	TObjectPtr<UTargetingPreset> TargetingPreset;

	/** Defines if the targeting will execute asynchronously. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Warping Target Provider")
	bool bExecuteAsync;

	virtual void HandleTargetReceived(UNinjaCombatGameplayAbility* CombatAbility, const FTargetingRequestHandle& TargetingHandle) const;
	
};
