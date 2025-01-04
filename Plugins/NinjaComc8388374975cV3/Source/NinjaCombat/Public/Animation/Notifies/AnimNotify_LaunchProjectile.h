// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Animation/NinjaCombatAnimNotify.h"
#include "GameFramework/Actor.h"
#include "Types/ECombatAbilitySource.h"
#include "AnimNotify_LaunchProjectile.generated.h"

class UNinjaCombatProjectileRequest;

/**
 * Sends a Gameplay Event to launch a projectile.
 */
UCLASS(meta = (DisplayName = "Launch Projectile"))
class NINJACOMBAT_API UAnimNotify_LaunchProjectile : public UNinjaCombatAnimNotify
{
	
	GENERATED_BODY()

public:

	/** Determines if the projectile launches from the owner or the weapon. */
	UPROPERTY(EditAnywhere, Category = "Launch Projectile")
	ECombatAbilitySource Source;
	
	/** Query used to retrieve the weapon from which the projectile will launch. */
	UPROPERTY(EditAnywhere, Category = "Launch Projectile", meta = (EditCondition = "Source == ECombatAbilitySource::Weapon"))
	FGameplayTagQuery WeaponQuery;

	/** Name of the socket used as reference for the projectile's origin. */
	UPROPERTY(EditAnywhere, Category = "Launch Projectile")
	FName OriginSocketName;

	/**
	 * Actor class for the projectile being spawned.
	 * Values provided by a "ProjectileProviderInterface" will take precedence.
	 */
	UPROPERTY(EditAnywhere, Category = "Launch Projectile", meta = (MustImplement = "/Script/NinjaCombat.CombatProjectileInterface"))
	TSubclassOf<AActor> ProjectileClass;
	
	/** Class used to represent the Projectile Request. */
	UPROPERTY(EditAnywhere, Category = "Launch Projectile", NoClear)
	TSubclassOf<UNinjaCombatProjectileRequest> ProjectileRequestClass;
	
	UAnimNotify_LaunchProjectile();

	// -- Begin Anim Notify implementation
	virtual void Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference) override;
	virtual FString GetNotifyName_Implementation() const override;
	// -- end Anim Notify implementation

protected:

	/**
	 * Provides the weapon actor for from the provided query.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Combat|Launch Projectile Anim Notify")
	AActor* GetWeaponActor(const AActor* WeaponOwner) const;
	
	/**
	 * Provides the Ranged Source Mesh for this request.
	 * 
	 * @param MeshOwner	Owner of the mesh. Could be the Animation Owner or a Weapon Instance.
	 * @return			The projectile source obtained via the Ranged Interface.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Combat|Launch Projectile Anim Notify")
	UMeshComponent* GetRangedMesh(const AActor* MeshOwner) const;
	
	/**
	 * Creates the Projectile Request from the parameters in this class.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Launch Projectile")
	UNinjaCombatProjectileRequest* CreateRequestInstance(AActor* Owner, UMeshComponent* SourceMesh) const;

	/**
	 * Retrieves the Projectile Class for this notify.
	 * This separation simplifies extending this projectile to apply custom projectile logic.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Launch Projectile")
	TSubclassOf<AActor> GetProjectileClass(const AActor* Owner) const;

	static bool GetValidProjectileClass(const AActor* ProjectileSource, TSubclassOf<AActor>& OutProjectileClass);
	
};
