// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/Object.h"
#include "NinjaCombatCastRequest.generated.h"

/**
 * Represents a request to spawn a cast actor
 */
UCLASS(Blueprintable, BlueprintType)
class NINJACOMBAT_API UNinjaCombatCastRequest : public UObject
{
	
	GENERATED_BODY()

public:

	UNinjaCombatCastRequest();
	
	/**
	 * Creates a new Cast Request, with required data.
	 *
	 * @param RequestClass		Optional class used for the request, in case the default one is being extended.
	 * @param Source			Source requesting the cast.
	 * @param Owner				Owner for this request.
	 * @param Instigator		Instigator used for the projectile.
	 * @param CastClass			Class representing the cast that will be spawned.
	 * @return					The cast request, ready to be used.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Combat|Cast Request", DisplayName = "New Cast Request Instance", meta = (DefaultToSelf = "Source"))
	static UNinjaCombatCastRequest* NewInstance(TSubclassOf<UNinjaCombatCastRequest> RequestClass,
		const UObject* Source, AActor* Owner, AActor* Instigator, UPARAM(meta = (MustImplement = "/Script/NinjaCombat.CombatCastInterface")) TSubclassOf<AActor> CastClass);

	/**
	 * Provides the source for the request.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Combat|Cast Request")
	const UObject* GetRequestSource() const;
	
	/**
	 * Provides the owner for this request.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Combat|Cast Request")
	AActor* GetRequestOwner() const;

	/**
	 * Provides the instigator for this request, which can be used by Gameplay Effects.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Combat|Cast Request")
	APawn* GetInstigator() const;

	/**
	 * Calculates and provides the Source Rotation that can be used.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Combat|Cast Request")
	virtual FVector GetSourceLocation() const;
	
	/**
	 * Provides the transform for the cast.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Combat|Cast Request")
	virtual FTransform GetCastTransform() const;

	/**
	 * Sets an instigator for this request, overriding the default one.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Combat|Cast Request")
	void SetInstigator(APawn* NewInstigator);

	/**
	 * Sets a new transform for the cast actor.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Combat|Cast Request")
	void SetCastTransform(FTransform NewCastTransform);
	
	/**
	 * Reinforces the Cast class used by this request.
	 * Only takes effect it the current value is not set yet.
	 *
	 * @param NewCastClass
	 *		The projectile class to set, reinforcing the internal value.
	 *		Must be valid and implement CombatCastInterface.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Combat|Cast Request")
	void ReinforceCastClass(UPARAM(meta = (MustImplement = "/Script/NinjaCombat.CombatCastInterface")) TSubclassOf<AActor> NewCastClass);
	
	/**
	 * Spawns the cast, based on the internal definition.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Combat|Cast Request")
	AActor* SpawnCastActor(bool bAutoActivate = true) const;
	
	/**
	 * Modifies the cast once it's available.
	 * 
	 * Keep in mind that the cast might be coming from a pool, so these changes could
	 * carry over to the next usage. Make sure to account for that when using this.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Projectile Request")
	void ModifyCastActor(AActor* CastActor) const;
	
protected:

	/** Object that has instantiated the cast request. */
	UPROPERTY(BlueprintReadOnly, Category = "Cast Request")
	TObjectPtr<const UObject> RequestSource;
	
	/** Actor that has triggered the cast. */
	UPROPERTY(BlueprintReadOnly, Category = "Cast Request")
	TObjectPtr<AActor> RequestOwner;

	/** Instigator for this projectile, which can be used by Gameplay Effects. */
	UPROPERTY(BlueprintReadOnly, Category = "Cast Request")
	TObjectPtr<APawn> Instigator;

	/** Class representing the cast that will be spawned. */
	UPROPERTY(BlueprintReadOnly, Category = "Cast Request")
	TSubclassOf<AActor> CastClass;

	/** Transform assigned to the cast actor. */
	UPROPERTY(BlueprintReadOnly, Category = "Cast Request")
	FTransform CastTransform;
};
