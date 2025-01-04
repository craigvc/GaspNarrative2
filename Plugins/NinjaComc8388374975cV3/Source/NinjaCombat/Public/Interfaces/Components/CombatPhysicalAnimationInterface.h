// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "Types/FCombatPhysicalAnimationSettings.h"
#include "UObject/Interface.h"
#include "CombatPhysicalAnimationInterface.generated.h"

class UNinjaCombatImpactSetupData;

UINTERFACE(MinimalAPI)
class UCombatPhysicalAnimationInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * Defines the API for a component that executes physical animations.
 */
class NINJACOMBAT_API ICombatPhysicalAnimationInterface
{
	
	GENERATED_BODY()

public:

	/**
	 * Informs if this component is reacting to damage. 
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Physical Animation Interface")
	bool IsReactingToImpact() const;

	/**
	 * Informs how much time left for an ongoing reaction. 
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Physical Animation Interface")
	float GetImpactReactionTimeLeft() const;
	
	/**
	 * Provides a setup that will override the current settings.
	 * 
	 * @param NewSettings
	 *		New Physical Animation Settings used by the component.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Physical Animation Interface")
	void SetImpactSettings(const FCombatPhysicalAnimationSettings& NewSettings);
	
	/**
	 * Evaluates a given Effect Context and plays Physical Animations.
	 *
	 * @param EffectCauser	Actor that generated this impact.
	 * @param Context		Effect Context that generated this impact.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Physical Animation Interface")
	void HandleImpact(const AActor* EffectCauser, const FGameplayEffectContextHandle& Context);
	
};
