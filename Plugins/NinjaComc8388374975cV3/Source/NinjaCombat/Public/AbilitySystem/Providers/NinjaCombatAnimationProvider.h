// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "UObject/Object.h"
#include "NinjaCombatAnimationProvider.generated.h"

class UAnimMontage;
class UNinjaCombatGameplayAbility;

/**
 * Provides an Animation to be used by the Combat System.
 *
 * By default, it will use the Animation Interface to retrieve the information from the
 * Gameplay Ability. For more information, please check CombatAnimationMontageProviderInterface.
 */
UCLASS(Const, Blueprintable, BlueprintType, EditInlineNew, DefaultToInstanced, meta = (DisplayName = "Combat Animation Provider"))
class NINJACOMBAT_API UNinjaCombatAnimationProvider : public UObject
{
	
	GENERATED_BODY()

public:

	UNinjaCombatAnimationProvider();
	
	/**
	 * Provides the Animation Montage to be used by the requesting ability.
	 * 
	 * @param CombatAbility		Ability requesting the montage.
	 * @return					The Animation Montage to play.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Animation Provider")
	UAnimMontage* GetMontageToPlay(UNinjaCombatGameplayAbility* CombatAbility) const;

	/**
	 * Provides the Montage Section to be used.
	 *
	 * @param CombatAbility		Ability requesting the Section.
	 * @return					The Montage Section to be Used.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Animation Provider")
	FName GetSectionName(UNinjaCombatGameplayAbility* CombatAbility) const;

	/**
	 * Provides a play rate for the montage.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Animation Provider")
	float GetPlayRate(UNinjaCombatGameplayAbility* CombatAbility) const;
	
protected:

	/**
	 * Default Animation Montage used if no other asset is obtained.
	 *
	 * Obtaining a montage using the Animation Asset Provider Interface or the contextual
	 * list of Animation Montages takes precedence over using this Animation Montage
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation Provider")
	TObjectPtr<UAnimMontage> DefaultAnimationMontage;

	/**
	 * Default Montage Section used if no other name is obtained.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation Provider")
	FName DefaultSectionName;

	/**
	 * Default Play Rate for animation montages if no other rate is obtained.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation Provider")
	float DefaultPlayRate;
	
	/**
	 * Retrieves an Ability Montage provided directly by the Gameplay Ability.
	 *
	 * By default, uses the ICombatAnimationMontageProviderInterface, on the Gameplay Ability.
	 * 
	 * This means that the ability will be able to define any Animation Montage, by any criteria
	 * (such as a simple UPROPERTY, for example) that can be used by the provider.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Combat|Animation Provider")	
	static UAnimMontage* GetAbilityAnimationMontage(const UNinjaCombatGameplayAbility* CombatAbility);

	/**
	 * Retrieves the appropriate Section Name, provided directly by the Gameplay Ability.
	 *
	 * By default, uses the ICombatAnimationMontageProviderInterface, on the Gameplay Ability.
	 * 
	 * This means that the ability will be able to define any Section Name, by any criteria
	 * (such as a simple UPROPERTY, for example) that can be used by the provider.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Combat|Animation Provider")
	static FName GetAbilitySectionName(const UNinjaCombatGameplayAbility* CombatAbility);

	/**
	 * Retrieves the appropriate Section Name, provided directly by the Gameplay Ability.
	 *
	 * By default, uses the ICombatAnimationMontageProviderInterface, on the Gameplay Ability.
	 * 
	 * This means that the ability will be able to define any Play Rate, by any criteria
	 * (such as a simple UPROPERTY, for example) that can be used by the provider.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Combat|Animation Provider")
	static float GetAbilityPlayRate(const UNinjaCombatGameplayAbility* CombatAbility);

	/**
	 * Retrieves all Combat Ability Tags, including contextual ones.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Combat|Animation Provider")
	static FGameplayTagContainer GetAbilityTags(const UNinjaCombatGameplayAbility* CombatAbility);
};
