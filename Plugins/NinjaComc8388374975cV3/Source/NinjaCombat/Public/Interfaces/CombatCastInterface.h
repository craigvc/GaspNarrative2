// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "GameplayEffectTypes.h"
#include "UObject/Interface.h"
#include "CombatCastInterface.generated.h"

UINTERFACE(MinimalAPI)
class UCombatCastInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * Defines basic methods for a cast.
 */
class NINJACOMBAT_API ICombatCastInterface
{
	
	GENERATED_BODY()

public:

	/**
	 * Sets the owner of this cast effect, usually a Gameplay Ability's Avatar.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Cast Interface")
	void SetCastOwner(AActor* CastOwner);
	
	/**
	 * Sets the Gameplay Effect Handle applied to targets collected.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Cast Interface")
	void SetGameplayEffectHandle(FGameplayEffectSpecHandle& Handle);

	/**
	 * Effectively starts the cast, once all basic requirements were provided.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Cast Interface")
	void StartCast();
	
};