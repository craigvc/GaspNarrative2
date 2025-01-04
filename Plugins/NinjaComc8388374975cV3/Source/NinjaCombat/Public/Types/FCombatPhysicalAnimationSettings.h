// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "FCombatPhysicalAnimationSettings.generated.h"

/**
 * General Settings for Physical Animations.
 */
USTRUCT(BlueprintType)
struct FCombatPhysicalAnimationSettings
{
	
	GENERATED_BODY()

	/** Strength applied when it can't be defined from the hit. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Combat Physical Animation Settings")
	float DefaultStrength;

	/** Default reaction time when it can't be defined from the hit. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Combat Physical Animation Settings")
	float DefaultReactionTime;
	
	/** Maximum weight applied for the simulation on top of kinematics. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Combat Physical Animation Settings")
	float MaxBlendWeight;

	/** Speed used to interpolate the blend weight back to full kinematics. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Combat Physical Animation Settings")
	float KinematicInterpSpeed;
	
	/** Name of the physics profile used for impacts. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Combat Physical Animation Settings")
	FName ProfileName;
	
	/** Name of the bone where simulation starts. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Combat Physical Animation Settings")
	FName BaseBoneName;

	/** Option to replace all bones hit for this one. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Combat Physical Animation Settings")
	bool bOverrideAllBoneImpacts;

	/** The "Catch-All" bone used for impacts. May be useful for scenarios where deep physical reaction is not necessary. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Combat Physical Animation Settings", meta = (EditCondition = "bOverrideAllBoneImpacts"))
	FName BoneReplacement;
	
	/** Map of bones that should be replaced in case these are the ones being hit. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Combat Physical Animation Settings", meta = (EditCondition = "!bOverrideAllBoneImpacts"))
	TMap<FName, FName> BoneReplacements;

	FCombatPhysicalAnimationSettings()
	{
		bOverrideAllBoneImpacts = true;
		MaxBlendWeight = 0.75f;
		DefaultStrength = 50000.f;
		DefaultReactionTime = 2.f;
		KinematicInterpSpeed = 5.f;

		ProfileName = TEXT("ImpactReaction");
		BaseBoneName = TEXT("spine_02");
		BoneReplacement = TEXT("spine_02");
	
		static const FName PelvisBoneName = TEXT("pelvis");
		static const FName PelvisReplacementBoneName = TEXT("spine_02");
		BoneReplacements.Add(PelvisBoneName, PelvisReplacementBoneName);
	}
};