// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "Damage/NinjaCombatDamageHandler.h"
#include "GameplayTagContainer.h"
#include "DamageHandler_CameraShake.generated.h"

class UCameraShakeBase;

/** Configuration Class for the Camera Shake. */
USTRUCT(BlueprintType)
struct FCameraShakeDamageReaction
{
	GENERATED_BODY()

	/** Tags for the camera shake. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera Shake", meta = (Categories = "Combat.Effect.Damage"))
	FGameplayTagContainer ContextTags = FGameplayTagContainer::EmptyContainer;

	/** If present, these tags will not trigger the shake. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera Shake")
	FGameplayTagContainer BlockedTags = FGameplayTagContainer::EmptyContainer;
	
	/** Camera shake for this reaction. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera Shake")
	TSubclassOf<UCameraShakeBase> CameraShake = nullptr;

	/** Scale for this camera shake. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera Shake")
	float Scale = 1.f;

};

/**
 * Plays a camera shake from incoming damage.
 */
UCLASS(DisplayName = "Camera Shake")
class NINJACOMBAT_API UDamageHandler_CameraShake : public UNinjaCombatDamageHandler
{
	
	GENERATED_BODY()

public:

	UDamageHandler_CameraShake();
	
	// -- Begin Damage Handler implementation
	virtual void HandleDamage_Implementation(UActorComponent* DamageManager, const FGameplayCueParameters& Parameters) const override;
	// -- End Damage Handler implementation

	/**
	 * Provides the camera shake to be used, based on the provided Parameters.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Combat|Damage Handler")
	TSubclassOf<UCameraShakeBase> GetCameraShake(const FGameplayCueParameters& Parameters) const;

	/**
	 * Provides the scale to be used for the camera shake, based on the provided Parameters.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Combat|Damage Handler")
	float GetScale(const FGameplayCueParameters& Parameters) const;
	
protected:

	/** Default Camera Shake in case a specific one is not found. */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Damage Handler")
	FCameraShakeDamageReaction DefaultCameraShake;

	/** Contextual camera shakes, played for certain types of damage. */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Damage Handler")
	TArray<FCameraShakeDamageReaction> ContextualCameraShakes;

	/** A default scale for this camera shake. */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Damage Handler")
	float DefaultScale;

	/**
	 * Collects the context tags from the incoming cue parameters.
	 *
	 * @param Parameters		Parameters from the Gameplay Cue.
	 * @param OutContextTags	Output context tags.
	 */
	virtual void CollectTagContext(const FGameplayCueParameters& Parameters, FGameplayTagContainer& OutContextTags) const;
	
};
