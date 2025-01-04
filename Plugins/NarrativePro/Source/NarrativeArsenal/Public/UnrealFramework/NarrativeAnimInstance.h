// Copyright Narrative Tools 2024. 

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "GameplayEffectTypes.h"
#include "NarrativeAnimInstance.generated.h"

/**
 * Narrative anim instance class - we generally just have this to add the GameplayTagPropertyMap as lyra does. 
 */
UCLASS()
class NARRATIVEARSENAL_API UNarrativeAnimInstance : public UAnimInstance
{
	GENERATED_BODY()
	
public:

	UNarrativeAnimInstance();

	void InitializePropertyMap(class UAbilitySystemComponent* ASC);

protected:

	virtual void NativeInitializeAnimation() override;

	/**Brilliant container type that ships with GAS - lets us bind variables directly to gameplaytags. */
	UPROPERTY(EditDefaultsOnly, Category = "GameplayTags")
	FGameplayTagBlueprintPropertyMap GameplayTagPropertyMap;
};
