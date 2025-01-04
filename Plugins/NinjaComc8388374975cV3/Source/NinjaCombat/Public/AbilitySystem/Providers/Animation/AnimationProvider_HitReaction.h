// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "AbilitySystem/Providers/NinjaCombatDirectionalAnimationProvider.h"
#include "AnimationProvider_HitReaction.generated.h"

struct FGameplayEffectContextHandle;

/** Configuration Class for the Hit Reaction. */
USTRUCT(BlueprintType)
struct FHitReactionContext
{
	GENERATED_BODY()

	/** Context for the hit reaction. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Directional Hit Context")
	FGameplayTagContainer ContextTags;
	
	/** Context for this Hit Reaction. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Directional Hit Context")
	TObjectPtr<UAnimMontage> AnimMontage;
};

/**
 * Provides appropriate animations for different types of damage impacts. 
 */
UCLASS(meta = (DisplayName = "Directional Hits"))
class NINJACOMBAT_API UAnimationProvider_HitReaction : public UNinjaCombatDirectionalAnimationProvider
{
	
	GENERATED_BODY()

public:

	// -- Begin Animation Provider implementation
	virtual UAnimMontage* GetMontageToPlay_Implementation(UNinjaCombatGameplayAbility* CombatAbility) const override;
	// -- End Animation Provider implementation

	/**
	 * Provides the Animation Context from the ability, via the Animation Context Provider Interface.
	 *
	 * @param CombatAbility			Ability implementing the Animation Context Provider interface.
	 * @param OutContext			Gameplay Tags providing details about the ability's animation.
	 * @return						True if the context is valid (has any valid tags).
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Combat|Animation Provider")
	static bool GetAnimationContext(const UNinjaCombatGameplayAbility* CombatAbility, FGameplayTagContainer& OutContext);

	/**
	 * Provides the Effect Context from the ability, via the Animation Context Provider Interface.
	 *
	 * @param CombatAbility			Ability implementing the Animation Context Provider interface.
	 * @param OutHandle				Gameplay Effect Handle containing trigger data, if any.
	 * @return						True if the effect handle is valid.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Combat|Animation Provider")
	static bool GetEffectContext(const UNinjaCombatGameplayAbility* CombatAbility, FGameplayEffectContextHandle& OutHandle);
	
protected:
	
	/**
	 * Maps specific types of damage to certain hit reactions.
	 * If no mapping is found, then the default animation montage is used.
	 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Animation Provider", meta = (TitleProperty = "AnimMontage"))
	TArray<FHitReactionContext> HitReactionContexts;

	/**
	 * Weight applied to the Hit Location, when determining the angle for the hit reaction.
	 *
	 * A value of 0 would completely ignore the Hit Location Weight, potentially favouring the Attacker Location instead.
	 * A value of 1 would blend use the Hit Location Weight with the Attacker Location.
	 *
	 * If both weights are set to 0, then the default location is always used. If both weights are set to 1, then
	 * an intermediate angle will be used. For example: Actor Angle = 0; Hit Angle = 90; Out Angle = 45.
	 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Animation Provider")
	float HitLocationWeight = 0.7f;

	/**
	 * Weight applied to the Attacker Location, when determining the angle for the hit reaction.
	 *
	 * A value of 0 would completely ignore the Attacker Location Weight, potentially favouring the Hit Location instead.
	 * A value of 1 would blend use the Attacker Location Weight with the Hit Location.
	 *
	 * If both weights are set to 0, then the default location is always used. If both weights are set to 1, then
	 * an intermediate angle will be used. For example: Actor Angle = 0; Hit Angle = 90; Out Angle = 45.
	 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Animation Provider")
	float AttackerLocationWeight = 0.35f;	

	// -- Begin Direction Animation Provider implementation
	virtual bool CalculateAnimationAngle_Implementation(UNinjaCombatGameplayAbility* CombatAbility, float& OutAngle) const override;
	// -- End Direction Animation Provider implementation
	
	/**
	 * Evaluates if a given context applies to a hit reaction.
	 *
	 * By default, this is a "HasAnyExact" check. However, you can extend this function to create
	 * other types of filtering, such as using Gameplay Tag Queries and so on.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Directional Hit Animation Provider")
	bool Applies(const FGameplayTagContainer& AbilityContext, const FHitReactionContext& HitReactionContext) const;

};
