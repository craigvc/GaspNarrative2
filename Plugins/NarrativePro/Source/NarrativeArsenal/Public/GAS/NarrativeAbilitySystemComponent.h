// Copyright Narrative Tools 2024. 

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemComponent.h"
#include "NarrativeSavableComponent.h"
#include "NarrativeAbilitySystemComponent.generated.h"

USTRUCT()
struct FSavedAttribute
{

GENERATED_BODY()

public: 

	FSavedAttribute() {};	

	UPROPERTY(EditDefaultsOnly, SaveGame, Category = "Saving")
	FString AttributeName;

	UPROPERTY(EditDefaultsOnly, SaveGame, Category = "Saving")
	float Value;

};

/**
 * Custom Ability system component for Narrative pro. Has ISavableComponent for saving attributes.
 */
UCLASS()
class NARRATIVEARSENAL_API UNarrativeAbilitySystemComponent : public UAbilitySystemComponent, public INarrativeSavableComponent
{
	GENERATED_BODY()
	
public:

	bool bStartupEffectsApplied = false;

	virtual void InitAbilityActorInfo(AActor* InOwnerActor, AActor* InAvatarActor) override;

	//We use this to remember attribute -> attribute value 
	UPROPERTY(SaveGame)
	TArray<FSavedAttribute> SavedAttributes;

protected:
	

	void PrepareForSave_Implementation() override;
	void Load_Implementation() override;

};
