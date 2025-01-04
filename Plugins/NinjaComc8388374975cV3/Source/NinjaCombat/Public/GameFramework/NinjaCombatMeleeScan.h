// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "CollisionShape.h"
#include "GameplayTagContainer.h"
#include "GameFramework/Pawn.h"
#include "Engine/EngineTypes.h"
#include "Types/EMeleeScanMode.h"
#include "NinjaCombatMeleeScan.generated.h"

class UGameplayEffect;
class UMeshComponent;

DECLARE_LOG_CATEGORY_EXTERN(LogNinjaCombatMeleeScan, Log, All);

/**
 * Represents a Melee Scan happening in the Combat System.
 */
UCLASS(Blueprintable, BlueprintType)
class NINJACOMBAT_API UNinjaCombatMeleeScan : public UObject
{
	
	GENERATED_BODY()

public:

	/**
	 * Determines if the Debug Mode is activated for this scan's execution.
	 *
	 * In debug mode, the scans will draw lines or spheres displaying targets that were collected
	 * and will be returned on each call to the Scan For Targets function.
	 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Melee Scan")
	bool bEnableDebug;
	
	UNinjaCombatMeleeScan();

	/**
	 * Creates a new instance of the Melee Scan.
	 *
	 * You have the option to use the default class or provide a customized one.
	 * In case you want to use the default one, you can just provide it or null to the Melee Scan Class.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Combat|Melee Scan", DisplayName = "New Melee Scan Instance")
	static UNinjaCombatMeleeScan* NewInstance(TSubclassOf<UNinjaCombatMeleeScan> MeleeScanClass, AActor* Owner,
		AActor* Instigator, AActor* Causer, UMeshComponent* ScanMesh, const TArray<FName>& SocketNames, ECollisionChannel ScanChannel,
		EMeleeScanMode ScanMode, FVector ShapeDimensions = FVector::ZeroVector, float Duration = 1.5f);

	/**
	 * Gets the instigator for this scan.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Combat|Melee Scan")
	AActor* GetInstigator() const { return Instigator; }

	/**
	 * Gets the causer for this scan, which may be the character or a weapon.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Combat|Melee Scan")
	AActor* GetCauser() const { return Causer; }

	/**
	 * Returns a duration for this Melee Scan.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Combat|Melee Scan")
	float GetDuration() const { return Duration; }
	
	/**
	 * Checks if this instance has valid data for a Melee Scan.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Combat|Melee Scan")
	virtual bool HasValidScanData() const;

	/**
	 * Provides a Gameplay Effect used to override the original hit.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Combat|Melee Scan")
	TSubclassOf<UGameplayEffect> GetMeleeHitOverride() const { return MeleeHitOverride; }

	/**
	 * Provides the Gameplay Tag for the cue.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Combat|Melee Scan")
	FGameplayTag GetTrailGameplayCueTag() const { return TrailGameplayCueTag; }
	
	/**
	 * Sets the Melee Hit override for this class.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Combat|Melee Scan")
	void SetMeleeHitOverride(const TSubclassOf<UGameplayEffect>& NewMeleeHitOverride);

	/**
	 * Sets the new Gameplay Cue Tag for the trail.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Combat|Melee Scan")
	void SetTrailGameplayCue(UPARAM(meta = (Categories = "GameplayCue")) FGameplayTag NewTrailGameplayCueTag);
	
	/**
	 * Snapshots all socket positions from the current mesh.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Combat|Melee Scan")
	virtual void SnapshotSocketPositions();
	
	/**
	 * Scan for targets, considering the setup represented by this instance.
	 *
	 * The scan is done by collecting targets between the previous and current Socket Positions
	 * in the provided Mesh Component. Anything hit in between will be added to the result array.
	 * 
	 * @param OutHits
	 *		All Hit Results collected for this scan.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Melee Scan")
	void ScanForTargets(TArray<FHitResult>& OutHits);

protected:

	/** Maximum duration for this scan if not deliberately cancelled. */
	UPROPERTY(BlueprintReadOnly, Category = "Melee Scan")
	float Duration;
	
	/** Actor that has triggered this scan. */
	UPROPERTY(BlueprintReadOnly, Category = "Melee Scan")
	TObjectPtr<AActor> ScanOwner;

	/** Instigator for this scan. */
	UPROPERTY(BlueprintReadOnly, Category = "Melee Scan")
	TObjectPtr<APawn> Instigator;

	/** Causer of this scan. */
	UPROPERTY(BlueprintReadOnly, Category = "Melee Scan")
	TObjectPtr<AActor> Causer;
	
	/** The Mesh Component from which the scan will execute. */
	UPROPERTY(BlueprintReadOnly, Category = "Melee Scan")
	TObjectPtr<UMeshComponent> ScanMesh;

	/**
	 * Sockets used for the Melee Scan.
	 *
	 * Most melee weapons will only have one set of sockets, but the reason why this is separate from
	 * the weapon itself is to allow different melee scans to be performed by different parts of the
	 * same weapon, which may be the case for something like a dual-blade.
	 *
	 * If the scan is set to be performed by the owner directly (i.e. a punch or kick), then these
	 * sockets must be present in the owner's mesh and, as before, it may refer to different parts
	 * of the mesh such as the hands or feet.
	 */
	UPROPERTY(BlueprintReadOnly, Category = "Melee Scan")
	TArray<FName> SocketNames;

	/**
	 * Channel used for the scan.
	 *
	 * Set by default in the Combat System Settings, but can be overriden in this scan data to any
	 * other channel that may be more appropriate for this particular case (which is recommended).
	 */
	UPROPERTY(BlueprintReadOnly, Category = "Melee Scan")
	TEnumAsByte<ECollisionChannel> ScanChannel;

	/**
	 * Scan Mode to be used.
	 *
	 * Some melee systems may benefit from a Line Trace where others would benefit better from a
	 * Sphere Trace. This setting allows you to adjust them on a per-scan basis. Depending on how
	 * your collisions are set up, you may need to change the scan channel too.
	 */
	UPROPERTY(BlueprintReadOnly, Category = "Melee Scan")
	EMeleeScanMode ScanMode;

	/**
	 * Gameplay Effect that overrides the one set in the ability.
	 * Useful when the same montage have many attacks that require different types of damage.
	 */
	UPROPERTY(BlueprintReadOnly, Category = "Melee Scan")
	TSubclassOf<UGameplayEffect> MeleeHitOverride;

	/** Gameplay Cue Tag for the Melee Scan cosmetics (Weapon Trails). */
	UPROPERTY(BlueprintReadOnly, Category = "Melee Scan")
	FGameplayTag TrailGameplayCueTag;
	
	/** Shape used for the scan, if the scan mode is set to use a sweep. */
	FCollisionShape ScanShape;
	
	/** Last positions scanned for each socket. */
	TMap<FName, FVector> LastSocketPositions;

	/** Targets that were hit during this scan. */
	TArray<FHitResult> ConsolidatedHits;

	/** Determines all actors that should be ignored in a hit-scan. */
	UFUNCTION(BlueprintNativeEvent, Category = "Melee Scan")
	TArray<AActor*> GetIgnoredActors() const;

private:

	void DrawScanLine(const FVector& StartPosition, const FVector& EndPosition) const;
	void DrawScanSweep(const FVector& StartPosition, const FQuat& Rotation) const;
	void DrawNewTarget(const FHitResult& NewHit) const;
	
};
