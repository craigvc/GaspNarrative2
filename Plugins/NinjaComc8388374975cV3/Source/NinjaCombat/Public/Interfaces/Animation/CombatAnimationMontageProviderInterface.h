// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "UObject/Interface.h"
#include "CombatAnimationMontageProviderInterface.generated.h"

class UAnimMontage;

UINTERFACE(MinimalAPI)
class UCombatAnimationMontageProviderInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * Defines an object that can receive a combat target.
 */
class NINJACOMBAT_API ICombatAnimationMontageProviderInterface
{
	
	GENERATED_BODY()

public:

	/**
	 * Provides an Animation Montage to be used by a combat ability.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Animation Montage Provider Interface")
	UAnimMontage* GetAnimationMontage(FGameplayTagContainer AbilityTags) const;
	virtual UAnimMontage* GetAnimationMontage_Implementation(FGameplayTagContainer AbilityTags) const { return nullptr; }

	/**
	 * Provides the Section Name to be used by a combat ability.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Animation Montage Provider Interface")
	FName GetSectionName(FGameplayTagContainer AbilityTags) const;
	virtual FName GetSectionName_Implementation(FGameplayTagContainer AbilityTags) const { return NAME_None; }

	/**
	 * Provides the Play Rate to be used by a combat ability.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Animation Montage Provider Interface")
	float GetPlayRate(FGameplayTagContainer AbilityTags) const;
	virtual float GetPlayRate_Implementation(FGameplayTagContainer AbilityTags) const { return 1.f; }
	
};