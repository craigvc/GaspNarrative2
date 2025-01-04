// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "Interfaces/Components/CombatPhysicalAnimationInterface.h"
#include "PhysicsEngine/PhysicalAnimationComponent.h"
#include "Types/FCombatPhysicalAnimationSettings.h"
#include "NinjaCombatPhysicalAnimationComponent.generated.h"

struct FGameplayEffectContextHandle;
class UNinjaCombatImpactSetupData;

/**
 * Specialized version of the Motion Warping Component, integrated with the Combat System.
 */
UCLASS(Blueprintable, ClassGroup = NinjaCombat, meta = (BlueprintSpawnableComponent))
class NINJACOMBAT_API UNinjaCombatPhysicalAnimationComponent : public UPhysicalAnimationComponent, public ICombatPhysicalAnimationInterface
{
	
	GENERATED_BODY()

public:
	
	UNinjaCombatPhysicalAnimationComponent(const FObjectInitializer& ObjectInitializer);

	// -- Begin Actor Component implementation
	virtual void BeginPlay() override;
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	// -- End Actor Component implementation

	// -- Begin Physical Animation Interface
	virtual bool IsReactingToImpact_Implementation() const override { return bIsReactingToImpact; }
	virtual float GetImpactReactionTimeLeft_Implementation() const override { return ImpactReactionTimeLeft; }
	virtual void SetImpactSettings_Implementation(const FCombatPhysicalAnimationSettings& NewSettings) override; 
	virtual void HandleImpact_Implementation(const AActor* EffectCauser, const FGameplayEffectContextHandle& Context) override;	
	// -- End Physical Animation Interface

protected:

	/** Settings for this component */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Physical Animation Component")
	FCombatPhysicalAnimationSettings Settings;
	
	/**
	 * Provides the bone name affected bu the provided context.
	 * 
	 * @param Hit		Information about the Hit.
	 * @return			The Bone Name included in the Effect Context's Hit Result.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Combat|Physical Animation")
	FName GetBoneName(const FHitResult& Hit) const;

	/**
	 * Provides the impact strength from the causer, or default.
	 * 
	 * @param EffectCauser		The source for this impact, potentially implementing an interface. 
	 * @return					Impact strength retrieved via interface, or the default value.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Combat|Physical Animation")
	float GetStrength(const AActor* EffectCauser) const;
	
	/**
	 * Calculates the impulse to be applied from a given hit.
	 *
	 * @param Hit		Information about the Hit.
	 * @param Strength	Strength of the impulse being applied.
	 * @return			Impulse added to a bone from the given hit.			
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Combat|Physical Animation")
	static FVector CalculateImpulse(const FHitResult& Hit, float Strength);
	
	/**
	 * Evaluates the current state and resets simulation if needed.
	 *
	 * @param DeltaTime
	 *		Time elapsed since last frame. Provided by the Tick Function, from where
	 *		this function is usually invoked. 
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Combat Physical Animation")
	void HandleSimulationReset(float DeltaTime);

private:

	bool bIsReactingToImpact;
	
	float ImpactReactionTimeLeft;	
	
};
