// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbilityTargetTypes.h"
#include "GameFramework/NinjaCombatPoolableActor.h"
#include "Interfaces/CombatCastInterface.h"
#include "NinjaCombatCastActor.generated.h"

class USphereComponent;

/**
 * Base implementation of a cast.
 */
UCLASS(Abstract)
class NINJACOMBAT_API ANinjaCombatCastActor : public ANinjaCombatPoolableActor, public ICombatCastInterface
{
	
	GENERATED_BODY()

public:

	/** Name used for the Cast Sphere. Use this if you don't want to create the component. */
	static FName CastSphereName;
	
	ANinjaCombatCastActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	// -- Begin Actor implementation
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	virtual void BeginPlay() override;
	// -- End Actor implementation

	// -- Begin Poolable Actor implementation
	virtual void OnActivation_Implementation() override;
	virtual void OnDeactivation_Implementation() override;
	// -- End Poolable Actor implementation
	
	// -- Begin Combat Cast implementation
	virtual void SetCastOwner_Implementation(AActor* CastOwner) override;
	virtual void SetGameplayEffectHandle_Implementation(FGameplayEffectSpecHandle& Handle) override;
	virtual void StartCast_Implementation() override;
	// -- End Combat Cast implementation

	/**
	 * Provides the Actor that originated this cast.
	 *
	 * The actor might be null as the cast can work independently of the owning actor
	 * still being alive/valid. Make sure to check that before performing any operations!
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Combat|Cast")
	AActor* GetCastOwner() const;

	/**
	 * Retrieves a Weapon Actor from the cast source.
	 * Useful if you need to align the Cast Actor with a weapon, or a socket.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Combat|Cast")
	AActor* GetWeapon(const FGameplayTagQuery& WeaponQuery) const;
	
	/**
	 * Tries to align the cast actor with the floor.
	 * You can also modify the alignment trace by overwriting "AlignWithFloor".
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Combat|Cast")
	void TryAlignWithFloor();
	
protected:

	/** Handle to the Gameplay Effect Spec applied to the owner. */
	FGameplayEffectSpecHandle GameplayEffectHandle;

	/** If set to true, then ignores the source whenever a collision is detected. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Cast")
	bool bShouldIgnoreSource;

	/**
	 * If set to true, reinforces hit result on targets.
	 * 
	 * Usually, you only need this if your cast should trigger hit/death reactions. Otherwise,
	 * if it's just an area of effect, that applies an effect, you can turn this off.
	 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Cast")
	bool bReinforceHitResults;
	
	/** If set to true, automatically tries to align the actor with the floor. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Cast")
	bool bTryToAlignWithFloor;

	/** Trace Channel used to detect the floor. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Cast", meta = (EditCondition = "bTryToAlignWithFloor"))
	TEnumAsByte<ECollisionChannel> FloorTraceChannel;

	/** An offset added to the final position before placing on the floor. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Cast", meta = (EditCondition = "bTryToAlignWithFloor"))
	FVector FloorOffset;

	UFUNCTION(BlueprintNativeEvent, Category = "Cast")
	void AlignWithFloor();
	
	/**
	 * Applies the Gameplay Effect to the target.
	 *
	 * Must be called in the authoritative version. It's safe to call this function if
	 * there's no Gameplay Effect Handle for targets.
	 */	
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "Ninja Combat|Cast")
	void ApplyEffectToTarget(AActor* Target);

	/**
	 * Applies the Gameplay Effect to a hit result.
	 *
	 * Must be called in the authoritative version. It's safe to call this function if
	 * there's no Gameplay Effect Handle for targets.
	 */	
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "Ninja Combat|Cast")
	void ApplyEffectToHitResult(const FHitResult& Hit);

	/**
	 * Applies the Data to a Target Ability System Component.
	 *
	 * @param TargetData
	 *		Target Data for targets and the new Effect Context.
	 */
	virtual void ApplyGameplayEffectToData(const FGameplayAbilityTargetDataHandle& TargetData); 

	/**
	 * Allows the caller to set any Dynamic Gameplay Tags to the outgoing effect.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Cast")
	FGameplayTagContainer GetDynamicGameplayTags() const;
	
	/**
	 * Allows the caller to set any additional magnitudes, based on any applicable rule.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Cast")
	TMap<FGameplayTag, float> GetAdditionalSetByCallerMagnitudes() const;
	
	/**
	 * Tries to apply this cast actor's Gameplay Effect to a target.
	 *
	 * It will check if the target should actually receive the effect, based on the
	 * conditions defined by "ShouldApplyToTarget" and then perform a line scan.
	 */
	virtual void TryApplyToTarget(AActor* OtherActor);

	/**
	 * Performs a line trace between this cast actor and the target actor.
	 *
	 * The trace is only meant to hit the other actor, so we can have a proper hit scan
	 * information for the Gameplay Effect context being applied to a target.
	 */
	virtual bool GetHitResultForTarget(FHitResult& OutHitResult, AActor* OtherActor) const;
	
	/**
	 * Checks if a captured target should receive the effect.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Cast")
	bool ShouldApplyToTarget(const AActor* Target);
	
	UFUNCTION(BlueprintNativeEvent, Category = "Cast")
	void HandleOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	
private:

	/** Source, usually an ability, that originated this cast. */
	UPROPERTY(Replicated)
	TWeakObjectPtr<AActor> CastOwnerPtr;

	/** Collision sphere for the cast. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess))
	TObjectPtr<USphereComponent> CastSphere;
	
};