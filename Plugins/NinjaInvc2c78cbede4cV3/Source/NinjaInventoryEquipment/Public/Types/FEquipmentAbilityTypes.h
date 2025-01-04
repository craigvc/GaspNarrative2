// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "ActiveGameplayEffectHandle.h"
#include "AttributeSet.h"
#include "GameplayEffect.h"
#include "GameplayAbilitySpecHandle.h"
#include "FEquipmentAbilityTypes.generated.h"

class UDataTable;
class UGameplayAbility;
class UGameplayEffect;

/** An Attribute Set granted by the Equipment. */
USTRUCT(BlueprintType)
struct NINJAINVENTORYEQUIPMENT_API FEquipmentAttributeSet
{
	
	GENERATED_BODY()

	/** Attribute Set granted by this fragment. */
	UPROPERTY(EditDefaultsOnly, Category = "Attribute Set", NoClear)
	TSubclassOf<UAttributeSet> AttributeSetClass = nullptr;

	/** Initial data applied to the Attribute Set. */
	UPROPERTY(EditDefaultsOnly, Category = "Attribute Set")
	TObjectPtr<UDataTable> InitialData = nullptr;
	
};

/** A Gameplay Effect granted by the Equipment. */
USTRUCT(BlueprintType)
struct NINJAINVENTORYEQUIPMENT_API FEquipmentGameplayEffect
{
	
	GENERATED_BODY()

	/** Gameplay Effect granted by this fragment. */
	UPROPERTY(EditDefaultsOnly, Category = "Gameplay Effect", NoClear)
	TSubclassOf<UGameplayEffect> GameplayEffectClass = nullptr;

	/**
	 * If set to true, uses the backing Item's level as the Effect Level.
	 *
	 * If the item does not have a Fragment that can produce an Item Level (implementations of the Upgradeable
	 * Item interface, such as the Level Item Fragment), then the value set for Effect Level is used instead.
	 */
	UPROPERTY(EditDefaultsOnly, Category = "Gameplay Effect")
	bool bUseItemLevelAsEffectLevel = false;
	
	/**
	 * Level for the granted effect.
	 *
	 * Can be overriden by the Item Level, if this entry is configured to do so, via the bUseItemLevelAsEffectLevel,
	 * in which case, this property becomes the default value in case the Item Level cannot be determined.
	 */
	UPROPERTY(EditDefaultsOnly, Category = "Gameplay Effect")
	float EffectLevel = 1.f;
	
};

/** A Gameplay Ability granted by the Equipment. */
USTRUCT(BlueprintType)
struct NINJAINVENTORYEQUIPMENT_API FEquipmentGameplayAbility
{
	
	GENERATED_BODY()

	/** Gameplay Ability granted by this fragment. */
	UPROPERTY(EditDefaultsOnly, Category = "Gameplay Ability", NoClear)
	TSubclassOf<UGameplayAbility> GameplayAbilityClass = nullptr;

	/** Level for the granted ability. */
	UPROPERTY(EditDefaultsOnly, Category = "Gameplay Ability")
	float AbilityLevel = 1.f;
	
};

/**
 * All handles granted by an equipment instance.
 */
USTRUCT(BlueprintType)
struct NINJAINVENTORYEQUIPMENT_API FEquipmentAbilityHandles
{
	
	GENERATED_BODY()

	/** Handles from all abilities granted. */
	UPROPERTY()
	TArray<FGameplayAbilitySpecHandle> AbilitySpecHandles;

	/** Handles from all effects granted. */
	UPROPERTY()
	TArray<FActiveGameplayEffectHandle> GameplayEffectHandles;

	/** Pointers to all attribute sets granted. */
	UPROPERTY()
	TArray<TObjectPtr<UAttributeSet>> GrantedAttributeSets;
	
	void AddGameplayAbilitySpecHandle(const FGameplayAbilitySpecHandle& Handle);
	void AddGameplayEffectHandle(const FActiveGameplayEffectHandle& Handle);
	void AddAttributeSet(UAttributeSet* AttributeSet);
	bool HasValidHandles() const;
	
};