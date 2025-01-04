// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Animation/NinjaCombatAnimNotifyState.h"
#include "Engine/EngineTypes.h"
#include "Types/ECombatAbilitySource.h"
#include "Types/EMeleeScanMode.h"
#include "AnimNotifyState_MeleeScan.generated.h"

class UGameplayEffect;
class UNiagaraComponent;
class UNinjaCombatMeleeScan;

/**
 * Sends Gameplay Events to start and stop melee scans.
 */
UCLASS(meta = (DisplayName = "Melee Scan"))
class UAnimNotifyState_MeleeScan : public UNinjaCombatAnimNotifyState
{
	
	GENERATED_BODY()

public:

	/**
	 * Determines if this scan uses the owner mesh that hosts this notify or a mesh from
	 * a weapon that must be obtained from the owner's Combat Manager, by a Weapon Query.
	 */
	UPROPERTY(EditAnywhere, Category = "Melee Scan")
	ECombatAbilitySource Source;

	/** Query used to retrieve the backing weapon. */
	UPROPERTY(EditAnywhere, Category = "Melee Scan", meta = (EditCondition = "Source == ECombatAbilitySource::Weapon", EditConditionHides))
	FGameplayTagQuery WeaponQuery;

	/** Enables the option to select a melee scan mesh by tag. */
	UPROPERTY(EditAnywhere, Category = "Melee Scan", meta = (InlineEditConditionToggle))
	bool bUsesComponentTag;

	/**
	 * Indicates the specific Component Tag used to find the Melee Mesh Component.
	 * Useful if the source is composed by many meshes that can participate in scans.
	 */	
	UPROPERTY(EditAnywhere, Category = "Melee Scan", meta = (EditCondition = "bUsesComponentTag"))
	FGameplayTag MeleeMeshTag;

	/** Prefix for all sockets used in this melee scan. */
	UPROPERTY(EditAnywhere, Category = "Melee Scan")
	FName ScanSocketPrefix;
	
	/** Channel used for the scan. */
	UPROPERTY(EditAnywhere, Category = "Melee Scan")
	TEnumAsByte<ECollisionChannel> ScanChannel;
	
	/** Scan Mode to be used. */
	UPROPERTY(EditAnywhere, Category = "Melee Scan")
	EMeleeScanMode ScanMode;

	/** Half extent for a box sweep. */
	UPROPERTY(EditAnywhere, Category = "Melee Scan", meta = (EditCondition = "ScanMode == EMeleeScanMode::BoxSweep", EditConditionHides))	
	FVector BoxHalfExtent;

	/** Extent for a capsule sweep. Max(X, Y) is used for radius, Z is used for Half-Height. */
	UPROPERTY(EditAnywhere, Category = "Melee Scan", meta = (EditCondition = "ScanMode == EMeleeScanMode::CapsuleSweep", EditConditionHides))	
	FVector CapsuleExtent;
	
	/** Radius for a sphere sweep. */
	UPROPERTY(EditAnywhere, Category = "Melee Scan", meta = (EditCondition = "ScanMode == EMeleeScanMode::SphereSweep", EditConditionHides))
	float SphereRadius;

	/**
	 * Gameplay Effect that overrides the one set in the ability. Not required.
	 * Useful when the same montage have many attacks that require different types of damage.
	 */
	UPROPERTY(EditAnywhere, Category = "Melee Scan")
	TSubclassOf<UGameplayEffect> MeleeHitOverride;
	
	/** Class used to represent the Melee Scan. */
	UPROPERTY(EditAnywhere, Category = "Melee Scan", NoClear)
	TSubclassOf<UNinjaCombatMeleeScan> MeleeScanClass;

	/** Gameplay Cue Tag for the Melee Scan cosmetics (Weapon Trails). */
	UPROPERTY(EditAnywhere, Category = "Weapon Trail", meta = (Categories = "GameplayCue"))
	FGameplayTag TrailGameplayCueTag;
	
	UAnimNotifyState_MeleeScan();
	
	// -- Begin Anim Notify State implementation
	virtual void NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration, const FAnimNotifyEventReference& EventReference) override;
	virtual void NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference) override;
	virtual FString GetNotifyName_Implementation() const override;
	// -- End Anim Notify State implementation

protected:
	
	/**
	 * Attempts to retrieve the Scan Mesh from the Weapon represented by the Query.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Combat|Melee Scan Anim Notify State")
	void TryInitializeObjectsForWeapon(const AActor* Owner);

	/**
	 * Attempts to retrieve the Scan Mesh from the owner.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Combat|Melee Scan Anim Notify State")
	void InitializeObjects(const AActor* AssetSource);
	
	/**
	 * Creates the Scan Instance from the parameters in this class.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Melee Scan")
	UNinjaCombatMeleeScan* CreateMeleeScanInstance(AActor* Owner, AActor* Causer, UMeshComponent* SourceMesh, float Duration) const;

private:

	/** Identifier for the melee scan request. */
	int32 RequestId;
	
	/** Weapon mesh obtained used by the scan. */
	UPROPERTY()
	TObjectPtr<UMeshComponent> ScanMeshComponent;

	/** Sockets used in the scan. */
	TArray<FName> ScanSocketNames;
};
