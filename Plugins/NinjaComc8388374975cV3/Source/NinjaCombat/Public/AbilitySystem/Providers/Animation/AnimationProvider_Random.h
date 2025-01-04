// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "AbilitySystem/Providers/NinjaCombatAnimationProvider.h"
#include "AnimationProvider_Random.generated.h"

/** Configuration Class for the Random Animation. */
USTRUCT(BlueprintType)
struct FRandomAnimationContext
{
	GENERATED_BODY()

	/** Animation Montage used as an option. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Random Animation Context")
	TObjectPtr<UAnimMontage> AnimMontage;
	
};

/**
 * Selects a random Animation Montage from a list.
 */
UCLASS(meta = (DisplayName = "Random"))
class NINJACOMBAT_API UAnimationProvider_Random : public UNinjaCombatAnimationProvider
{
	
	GENERATED_BODY()

public:

	// -- Begin Animation Provider implementation
	virtual UAnimMontage* GetMontageToPlay_Implementation(UNinjaCombatGameplayAbility* CombatAbility) const override;
	// -- End Animation Provider implementation

protected:
	
	/** List of random Animation Montages that can be provided. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Animation Provider", meta = (TitleProperty = "AnimMontage"))
	TArray<FRandomAnimationContext> RandomAnimations;
	
};
