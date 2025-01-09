// Copyright Narrative Tools 2024. 

#pragma once

#include "CoreMinimal.h"
#include "NarrativeItem.h"
#include "GameplayEffectItem.generated.h"


/**
 * A "consumable" item that applies the selected gameplay effect to the user when consumed. Great for potions, food, bandages, etc. Can technically be non-consumable via unchecking consume on use if you want a re-usable item that applies a GE 
 */
UCLASS()
class NARRATIVEARSENAL_API UGameplayEffectItem : public UNarrativeItem
{
	GENERATED_BODY()
	
public:

	UGameplayEffectItem();

protected:

	virtual void Use() override;
	virtual FString GetStringVariable_Implementation(const FString& VariableName);

	// Default attributes for a character for initializing on spawn/respawn.
	// This is an instant GE that overrides the values for attributes that get reset on spawn/respawn.
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Equippable")
	TSubclassOf<class UGameplayEffect> GameplayEffectClass;

	/** A list of all the set by caller tags, along with the values we should set them to. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Equippable", meta = (Categories = "SetByCaller"))
	TMap<FGameplayTag, float> SetByCallerValues;

};
