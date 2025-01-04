// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "Abilities/GameplayAbilityTypes.h"
#include "FNinjaCombatGameplayAbilityActorInfo.generated.h"

class UActorComponent;
class UNinjaCombatManagerComponent;

/**
 * Enhances the default actor info, so it will also resolve combat objects.
 * 
 * This is not directly used by the Combat/Ability System. Instead, a proxy object is used, so you
 * can use any other Actor Info struct as long as you provide an appropriate proxy for it.
 */
USTRUCT(BlueprintType)
struct FNinjaCombatGameplayAbilityActorInfo : public FGameplayAbilityActorInfo
{
    
    GENERATED_BODY()

    typedef Super FGameplayAbilityActorInfo;

    virtual ~FNinjaCombatGameplayAbilityActorInfo() override {}

	/**
	 * Combat Manager Component assigned to the actor.
	 * Can be used to retrieve all other relevant components.
	 */
	UPROPERTY(BlueprintReadOnly, Category = "Combat Info")
	TWeakObjectPtr<UNinjaCombatManagerComponent> CombatManagerComponent;

    // -- Begin Actor Info implementation
    virtual void InitFromActor(AActor* InOwnerActor, AActor* InAvatarActor, UAbilitySystemComponent* InAbilitySystemComponent) override;
    virtual void ClearActorInfo() override;
    // -- End Actor Info implementation
    
};